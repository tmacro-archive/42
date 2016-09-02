/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 12:28:43 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/31 23:18:27 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

extern int		g_rows;
extern int		g_cols;
extern char		g_full;

void	write_buffer(int fd, char *buffer, int size)
{
	if (size > 0)
		write(fd, buffer, size);
	else
	{
		while (*buffer)
		{
			write(fd, buffer, 1);
			buffer++;
		}
	}
}

void	print_std(char *buffer, int size)
{
	write_buffer(1, buffer, size);
}

void	print_error(char *buffer)
{
	write_buffer(2, buffer, 0);
}

void	print_solution(char **map, int x, int y, int size)
{
	int i;
	int j;

	i = 1;
	while (i - 1 < g_rows)
	{
		j = 0;
		while (j < g_cols)
		{
			if ((i - 1 >= x && i - 1 <= x + size) && (j >= y && j <= y + size))
				print_std(&g_full, 1);
			else
				print_std(&map[i][j], 1);
			j++;
		}
		print_std("\n", 1);
		i++;
	}
	print_std("\n", 1);
}
