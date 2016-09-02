/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 14:43:06 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/12 14:52:49 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void ft_sort_integer_table(int *tab, int size);

int main()
{
	int tab[] = {2, 4, 6, 1, 3, 5};
	int i;
	ft_sort_integer_table(&tab,6);
	for (i=0; i<6; i++)
	{
		printf("%i\n", tab[i]);
	}
}
