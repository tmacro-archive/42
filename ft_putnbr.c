/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 22:22:14 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/11 22:53:33 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	char digit;
	int buffer[6];
	int counter;
	
	if (nb < 0)
	{
		ft_putchar('-');
	}
	counter = 0;
	while (nb > 0)
	{
		digit = (nb % 10) + 48;
		nb = (nb - (nb % 10))/10;
		buffer[counter] = digit;
		/* ft_putchar(digit); */
		counter++;
	}
	while (counter >= 0)
	{
		ft_putchar(buffer[counter]);
		counter--;
	}
}

int main()
{
	ft_putnbr(3);
	ft_putnbr(-23);
	ft_putnbr(-456);
}
