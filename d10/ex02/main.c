/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 12:55:52 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/22 13:05:28 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_map(int *tab, int length, int(*f)(int));

int		test(int x)
{
	printf("%i\n", x);
	return (x + 1);
}

int main()
{
	int *tab;
	int *ret;
	int counter;

	counter = 0;
	tab = malloc(sizeof(int) * 9);
	while (counter < 9)
	{
		tab[counter] = counter;
		counter++;
	}
	ret = ft_map(tab, 9, &test);
	counter = 0;
	while (counter < 9)
	{
		printf("%i\n", ret[counter]);
		counter++;
	}
}

