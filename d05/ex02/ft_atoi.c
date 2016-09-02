/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 13:14:55 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/16 22:39:46 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strip_whitespace(char *str)
{
	while (*str == ' ' || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	return (str);
}

int		ft_atoi(char *str)
{
	long long	res;
	int			sign;

	sign = 1;
	res = 0;
	str = strip_whitespace(str);
	if (str[0] == '-')
	{
		sign = -1;
		str++;
	}
	else if (str[0] == '+')
		str++;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			res = res * 10 + (*str - '0');
		else
			break ;
		str++;
	}
	if (res > 2147483647 || res < -2147483648)
		return (-1);
	return (res * sign);
}
