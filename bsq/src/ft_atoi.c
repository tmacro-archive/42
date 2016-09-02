/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/30 19:18:49 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/31 01:16:20 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strip_whitespace(char *str)
{
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	return (str);
}

int		ft_strcmp(char *s1, char *s2)
{
	int sign;

	sign = 0;
	if (!*s1)
		return (-*s2);
	while (*s1)
	{
		if (*s1 != *s2++)
			return (*(const unsigned char*)s1 - *(const unsigned char*)--s2);
		else if (*s1++ == '0')
			return (0);
	}
	return (0);
}

int		ft_atoi(char *str)
{
	long long	res;
	int			sign;

	sign = 1;
	res = 0;
	str = strip_whitespace(str);
	if (ft_strcmp(str, "-2147483648") == 0)
		return (-2147483648);
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			res = res * 10 + (*str - '0');
		else
			break ;
		str++;
	}
	return (res * sign);
}
