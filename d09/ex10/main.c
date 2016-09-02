/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 09:49:27 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/19 09:59:33 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void ft_scrambler(int ***a, int *b, int *******c, int ****d);
int main()
{
	int a1;
	int b1;
	int c1;
	int d1;
	int *a2;
	int *b2;
	int *c2;
	int *d2;
	int **a3;
	int **c3;
	int **d3;
	int ***a4;
	int ***c4;
	int ***d4;
	int ****c5;
	int ****d5;
	int *****c6;
	int ******c7;
	int *******c8;

	a1 = 1;
	a2 = &a1;
	a3 = &a2;
	a4 = &a3;

	b1 = 2;
	b2 = &b1;

	c1 = 3;
	c2 = &c1;
	c3 = &c2;
	c4 = &c3;
	c5 = &c4;
	c6 = &c5;
	c7 = &c6;
	c8 = &c7;

	d1 = 4;
	d2 = &d1;
	d3 = &d2;
	d4 = &d3;
	d5 = &d4;

	printf("a: %i b: %i c: %i d: %i\n", ***a4, *b2, *******c8, ****d5);
	ft_scrambler(a4, b2, c8, d5);
	printf("a: %i b: %i c: %i d: %i", ***a4, *b2, *******c8, ****d5);
}
