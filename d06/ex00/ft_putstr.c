/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 10:30:52 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/16 23:43:35 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
int		ft_strlen(char *str);

void	ft_putstr(char *str)
{
	int str_length;
	int counter;

	str_length = ft_strlen(str);
	counter = 0;
	while (counter < str_length)
	{
		ft_putchar(str[counter]);
		counter++;
	}
}
