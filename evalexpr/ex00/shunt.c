/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shunt.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 19:52:25 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/28 23:05:06 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "eval.h"

#define SPACE(s)(s == '\t' || s == '\n' || s == ' ')
#define NUM(s)(s >= '0' && s <= '9')
#define OPAR(s)(s == '(')
#define CPAR(s)(s == ')')
#define OP(s)(s == '-' || s == '+' || s == '/' || s == '*' || s == '%')
#define ADD 1
#define SUB 1
#define MUL 2
#define DIV 2
#define MOD 2
#define OPT 0

t_operator g_opps[] =
{
	{"-", SUB, &ft_sub},
	{"+", ADD, &ft_add},
	{"*", MUL, &ft_mul},
	{"/", DIV, &ft_div},
	{"%", MOD, &ft_mod},
	{"(", OPT, NULL},
};

t_operator	*get_op(char c, t_operator *funcs)
{
	while (funcs)
	{
		if (*funcs->symbol == c)
			return (funcs);
		funcs++;
	}
	return (NULL);
}

char		*enq_number(char *s, t_frame **queue)
{
	int			num;
	t_operand	*tmp;

	num = ft_atoi(s);
	tmp = (t_operand*)malloc(sizeof(t_operand));
	tmp->value = num;
	enq_frame(queue, create_frame(tmp, 2));
	return (s + count_digits(num));
}

void		push_operator(char c, t_frame **stack, t_frame **queue)
{
	t_operator	*opp;
	t_frame		*tmp;

	opp = get_op(c, g_opps);
	if (!(*stack)->item)
		push_frame(stack, create_frame(opp, 1));
	else if (*((t_operator*)(*stack)->item)->symbol == '(' || c == '(')
		push_frame(stack, create_frame(opp, 1));
	else if (opp->presedence > ((t_operator*)(*stack)->item)->presedence)
	{
		push_frame(stack, create_frame(opp, 1));
	}
	else
	{
		while ((*stack)->item &&
				opp->presedence <= ((t_operator*)(*stack)->item)->presedence)
		{
			tmp = pop_frame(stack);
			enq_frame(queue, tmp);
		}
		push_frame(stack, create_frame(opp, 1));
	}
}

void		handle_close_paren(t_frame **stack, t_frame **queue)
{
	t_frame *tmp;
	t_frame *current;

	current = *stack;
	while (current->item && *(((t_operator*)(current->item))->symbol) != '(')
	{
		tmp = pop_frame(stack);
		enq_frame(queue, tmp);
		current = *stack;
	}
	pop_frame(stack);
}

t_frame		**shunt(char *s)
{
	t_frame **stack;
	t_frame	**queue;

	stack = create_stack();
	queue = create_stack();
	while (*s)
	{
		if (NUM(*s))
			s = enq_number(s, queue);
		else
		{
			if (OP(*s))
				push_operator(*s, stack, queue);
			if (OPAR(*s))
				push_operator(*s, stack, queue);
			if (CPAR(*s))
				handle_close_paren(stack, queue);
			s++;
		}
	}
	while ((*stack)->item)
		enq_frame(queue, pop_frame(stack));
	return (queue);
}
