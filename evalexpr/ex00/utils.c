/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/28 14:28:55 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/28 22:58:32 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define INT_MIN -2147483648
#define INT_MAX 2147483647

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

int		count_digits(int n)
{
	if (n < 0)
		n = (n == INT_MIN) ? INT_MAX : -n;
	if (n < 10)
		return (1);
	if (n < 100)
		return (2);
	if (n < 1000)
		return (3);
	if (n < 10000)
		return (4);
	if (n < 100000)
		return (5);
	if (n < 1000000)
		return (6);
	if (n < 10000000)
		return (7);
	if (n < 100000000)
		return (8);
	if (n < 1000000000)
		return (9);
	return (10);
}
