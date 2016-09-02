/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 16:25:26 by tmckinno          #+#    #+#             */
/*   Updated: 2016/09/01 16:35:56 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdlib.h> */
#include <unistd.h>
void	print_memory(const void *addr, size_t size)
{
	unsigned int i;
	int *tab;

	tab = (int*)addr;
	i = 0;
	while (i < size)
	{
		write(1, &((char)(tab[i] + 48)), 1);
		i++;
	}
}


int main(void)
{
	int tab[10] = {0, 23, 150, 255, 12, 16, 21, 42};
	print_memory(tab, sizeof(tab));
	return (0);
}
