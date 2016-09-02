/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 16:07:32 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/22 20:45:47 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

char	*strip_whitespace(char *s)
{
	while ((*s >= 8 && *s <= 13) || *s == ' ')
		s++;
	return (s);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	if (*s1 && !(*s2))
		return (0);
	if (*s2 && !(*s1))
		return (0);
	return (1);
}

int		ft_atoi(char *c)
{
	int sign;
	int ret;

	sign = 1;
	ret = 0;
	c = strip_whitespace(c);
	if (ft_strcmp(c, "-2147483648"))
		return (-2147483648);
	if (*c == '-')
	{
		sign = -1;
		c++;
	}
	else if (*c == '+')
		c++;
	while (*c)
	{
		if (!(*c >= 48 && *c <= 57))
			return (ret * sign);
		ret = (ret * 10) + (*c - 48);
		c++;
	}
	return (ret * sign);
}

void	ft_putstr(char *s)
{
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb == -2147483648)
	{
		ft_putchar('2');
		nb %= 1000000000;
		nb = -nb;
	}
	if (nb / 10 != 0)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}
