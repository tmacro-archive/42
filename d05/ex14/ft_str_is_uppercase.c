/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 12:40:34 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/16 21:57:53 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int upper;

	upper = 1;
	if (!*str)
		return (0);
	while (*str != 0)
	{
		if (!(*str >= 65 && *str <= 90))
		{
			if (*str != '\0')
			{
				upper = 0;
				break ;
			}
		}
		str++;
	}
	return (upper);
}
