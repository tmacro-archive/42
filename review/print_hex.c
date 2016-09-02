/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 15:08:24 by tmckinno          #+#    #+#             */
/*   Updated: 2016/09/01 16:08:51 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
void hex_dump(int n, int base)
{
	int digit;
	char buf[256];
	int i;
	
	i = 0;
	while (n != 0)
	{
		digit = n % base;
		if (digit > 10)
			buf[i] = digit + 87;
		else
			buf[i] = digit + 48;
		n = n / base;
		i++;
	}
	while (i >= 0)
	{
		write(1, &buf[i], 1);
		i--;
	}
}

int main()
{
	hex_dump(1000, 13);

}
