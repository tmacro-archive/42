/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 10:30:52 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/15 12:53:37 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		size(char *ptr)
{
	int offset;
	int count;

	offset = 0;
	count = 0;
	while (*(ptr + offset) != '\0')
	{
		++count;
		++offset;
	}
	return (count);
}

void	ft_putstr(char *str)
{
	int str_length;
	int counter;

	str_length = size(str);
	counter = 0;
	while (counter < str_length)
	{
		ft_putchar(str[counter]);
		counter++;
	}
}
