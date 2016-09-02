/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 12:40:34 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/16 21:57:13 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int lower;

	lower = 1;
	if (!*str)
		return (0);
	while (*str != 0)
	{
		if (!(*str >= 97 && *str <= 122))
		{
			if (*str != '\0')
			{
				lower = 0;
				break ;
			}
		}
		str++;
	}
	return (lower);
}
