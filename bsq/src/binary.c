/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/30 20:32:41 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/31 23:20:16 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

extern int	g_rows;
extern int	g_cols;
extern char	g_empty;
extern char	g_full;
extern char	g_obstacle;

int		*create_row_array(char *row)
{
	int *ret;
	int obs;
	int i;

	ret = allocate_int_buffer(1);
	ret[0] = 0;
	i = 0;
	obs = 0;
	while (row[i])
	{
		if (row[i] == g_obstacle)
		{
			obs++;
			ret = extend_int_buffer(ret, obs, obs + 1);
			ret[obs] = i;
		}
		i++;
	}
	ret[0] = obs;
	return (ret);
}

int		*create_col_array(char **map, int col)
{
	int *ret;
	int obs;
	int i;

	ret = allocate_int_buffer(1);
	ret[0] = 0;
	i = 1;
	obs = 0;
	while (i < g_rows)
	{
		if (map[i][col] == g_obstacle)
		{
			obs++;
			ret = extend_int_buffer(ret, obs, obs + 1);
			ret[obs] = i - 1;
		}
		i++;
	}
	ret[0] = obs;
	return (ret);
}

int		***create_obstacle_set(char **map)
{
	int ***set;
	int **rows;
	int **cols;
	int i;

	rows = (int**)malloc(sizeof(int*) * g_rows);
	cols = (int**)malloc(sizeof(int*) * g_cols);
	i = 0;
	while (i < g_rows)
	{
		rows[i] = create_row_array(map[i + 1]);
		i++;
	}
	i = 0;
	while (i < g_cols)
	{
		cols[i] = create_col_array(map, i);
		i++;
	}
	set = (int***)malloc(sizeof(int**) * 2);
	set[0] = rows;
	set[1] = cols;
	return (set);
}
