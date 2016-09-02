/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 11:12:52 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/12 14:22:31 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_ft(int *********nbr);
int ft_putnbr(int x);

int main (int argc, char *argv[])
{
	int x;
	int *x1;
	int **x2;
	int ***x3;
	int ****x4;
	int *****x5;
	int ******x6;
	int *******x7;
	int ********x8;
	int *********x9;

	x= argv[1] - 48;

	x1 = &x,
	x2 = &x1;
	x3 = &x2;
	x4 = &x3;
	x5 = &x4;
	x6 = &x5;
	x7 = &x6;
	x8 = &x7;
	x9 = &x8;

	ft_ultimate_ft(x9);
	printf("%i\n", *********x9);
}
