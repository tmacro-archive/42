/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   polish.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 19:51:37 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/28 23:08:20 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval.h"

void	do_math(t_frame **stack, t_aop opp)
{
	int			num1;
	int			num2;
	t_operand	*result;

	result = (t_operand*)malloc(sizeof(t_operand));
	num2 = ((t_operand*)(pop_frame(stack))->item)->value;
	num1 = ((t_operand*)(pop_frame(stack))->item)->value;
	result->value = (*opp)(num1, num2);
	push_frame(stack, create_frame(result, 2));
}

int		polish(t_frame **queue)
{
	t_frame		**stack;
	t_frame		*tmp;

	stack = create_stack();
	pop_frame(queue);
	while (*queue)
	{
		if ((*queue)->type == 2)
		{
			tmp = pop_frame(queue);
			push_frame(stack, tmp);
		}
		else if ((*queue)->type == 1)
		{
			do_math(stack, ((t_operator*)(*queue)->item)->func);
			pop_frame(queue);
		}
	}
	return (((t_operand*)(*stack)->item)->value);
}

int		eval_expr(char *s)
{
	t_frame **stack;

	stack = shunt(s);
	return (polish(stack));
}
