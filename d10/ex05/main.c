/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 15:33:29 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/22 15:50:22 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
int		ft_is_sort(int *tab, int length, int(*f)(int, int));

int test_order(int a, int b)
{
	return (a + b);
}



int main()
{
	int *tab;
	int counter;

	counter = 0;
	tab = malloc(sizeof(int) * 9);
	while (counter < 9)
	{
		tab[counter] = counter;
		counter++;
	}
	printf("%i\n", ft_is_sort(tab, 9, &test_order));
}
