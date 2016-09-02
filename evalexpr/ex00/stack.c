/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 18:52:36 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/28 22:59:25 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval.h"

t_frame		*create_frame(void *item, int type)
{
	t_frame *frame;

	frame = (t_frame*)malloc(sizeof(t_frame));
	frame->item = item;
	frame->type = type;
	frame->prev = NULL;
	frame->next = NULL;
	return (frame);
}

void		push_frame(t_frame **stack, t_frame *frame)
{
	frame->next = *stack;
	(*stack)->prev = frame;
	(*stack) = frame;
}

t_frame		*pop_frame(t_frame **stack)
{
	t_frame *ret;

	ret = *stack;
	(*stack)->prev = 0;
	*stack = (*stack)->next;
	ret->next = NULL;
	ret->prev = NULL;
	return (ret);
}

void		enq_frame(t_frame **stack, t_frame *frame)
{
	t_frame *current;

	if (!*stack)
	{
		*stack = frame;
		return ;
	}
	current = *stack;
	while (current->next)
		current = current->next;
	current->next = frame;
	frame->prev = current;
}

t_frame		**create_stack(void)
{
	t_frame		**head;
	t_frame		*ptr;

	ptr = (t_frame*)malloc(sizeof(t_frame));
	head = (t_frame**)malloc(sizeof(t_frame*));
	ptr = create_frame(NULL, -1);
	*head = ptr;
	return (head);
}
