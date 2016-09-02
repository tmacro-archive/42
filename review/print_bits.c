/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 16:09:01 by tmckinno          #+#    #+#             */
/*   Updated: 2016/09/01 16:25:18 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_bits(unsigned char octet)
{
	int i;
	i = 8;
	while (i > 0)
	{
		if ((octet >> (i - 1)) & 1)
			printf("1");
		else
			printf("0");
		i--;
	}
}


int main()
{
	print_bits(1);
}
