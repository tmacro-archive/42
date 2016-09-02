/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/29 14:10:40 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/31 23:31:14 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "solve.h"

char	g_empty;
char	g_obstacle;
char	g_full;
int		g_rows;
int		g_cols;

void	parse_format(char **map)
{
	int offset;

	g_rows = ft_atoi(*map);
	offset = count_digits(g_rows);
	if (ft_strlen(*map) != offset + 3)
	{
		print_error("map error\n");
		exit(1);
	}
	g_empty = map[0][offset];
	g_obstacle = map[0][1 + offset];
	g_full = map[0][2 + offset];
	g_cols = ft_strlen(map[1]);
}

char	**load_map(char *filename, int fd)
{
	char **map;

	if (filename)
	{
		fd = open_file(filename);
	}
	map = split_by_line(read_input(fd));
	parse_format(map);
	return (map);
}

int		search_square(int ***ob_set, int x, int y, int size)
{
	if (binary_search(ob_set, size, x, y))
	{
		if (!(x + size + 1 == g_rows || y + size + 1 == g_cols))
			return (search_square(ob_set, x, y, size + 1));
	}
	return (size - 1);
}

int		*solve_map(int ***ob_set, int x, int y)
{
	int size;
	int tmp;
	int *best;

	size = 0;
	while (x + size < g_rows)
	{
		y = 0;
		while (y + size < g_cols)
		{
			tmp = search_square(ob_set, x, y, 0);
			if (tmp > size)
			{
				size = tmp;
				best = create_three_tuple(x, y, size);
			}
			y++;
		}
		x++;
	}
	return (best);
}
