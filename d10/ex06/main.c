/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 18:25:57 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/23 21:29:31 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"
#include <stdlib.h>
#include <stdio.h>

t_opp g_dopptab[] =
{
	{"-", &ft_sub},
	{"+", &ft_add},
	{"*", &ft_mul},
	{"/", &ft_div},
	{"%", &ft_mod},
};

int		op_to_int(char *c)
{
	if (ft_strlen(c) > 1)
		return (-1);
	if (*c == '*')
		return (0);
	if (*c == '+')
		return (1);
	if (*c == '%')
		return (2);
	if (*c == '-')
		return (3);
	if (*c == '/')
		return (4);
	return (-1);
}

t_aop	get_op(char c, t_opp *funcs)
{
	while (funcs)
	{
		if (*funcs->opp == c)
			return (funcs->func);
		funcs++;
	}
	return (NULL);
}

int		check_invalid_op(int y, int op)
{
	if (op == 4)
	{
		if (y == 0)
			return (0);
	}
	if (op == 2)
	{
		if (y == 0)
			return (0);
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		op;
	int		num1;
	int		num2;
	int		result;
	t_aop	math_op;

	if (argc != 4)
		return (0);
	op = op_to_int(argv[2]);
	if (op == -1)
		ft_putstr("0");
	num1 = ft_atoi(argv[1]);
	num2 = ft_atoi(argv[3]);
	if (!check_invalid_op(num2, op))
	{
		if (op == 4)
			ft_putstr("Stop : division by zero\n");
		if (op == 2)
			ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	math_op = get_op(argv[2][0], g_dopptab);
	result = (*math_op)(num1, num2);
	ft_putnbr(result);
	ft_putchar('\n');
}
