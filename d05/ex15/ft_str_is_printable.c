/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 12:40:34 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/16 21:58:22 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int printable;

	printable = 1;
	if (!*str)
		return (0);
	while (*str != 0)
	{
		if (!(*str >= 32 && *str <= 126))
		{
			if (*str != '\0')
			{
				printable = 0;
				break ;
			}
		}
		str++;
	}
	return (printable);
}
