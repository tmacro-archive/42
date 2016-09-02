/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 18:52:36 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/26 19:06:35 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_frame	*create_frame(t_btree *node)
{
	t_frame *frame;

	frame = (t_bree*)malloc(sizeof(t_frame));
	frame->node = node;
	frame->next = 0;
	return (frame);
}

void	push_frame(t_frame **stack, t_btree *node)
{
	t_frame *frame;

	frame = create_frame(node);
	frame->next = *stack;
	*stack = frame;
}

t_frame	*pop_frame(t_frame **stack)
{
	t_frame ret;

	ret = *stack;
	*stack = *stack->next;
	return (ret);
}
