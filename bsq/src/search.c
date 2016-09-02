/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bslakey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 01:36:39 by bslakey           #+#    #+#             */
/*   Updated: 2016/08/31 23:19:35 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <stdio.h>
#define INVAL(x) x >= min && x <= max
#define EDGE(y,z) INVAL(y) || INVAL(z)
#define END(y, z) (y == z || y + 1 == z) && !(EDGE(map[y],map[z]))

int		search(int *map, int min, int max)
{
	int first_val;
	int last_val;
	int mid_val;

	first_val = 1;
	last_val = map[0];
	if (map[0] == 0)
		return (1);
	mid_val = ((last_val + first_val) / 2);
	while (1)
	{
		if ((INVAL(map[mid_val])) || (EDGE(map[first_val], map[last_val])))
			return (0);
		if (END(first_val, last_val))
			return (1);
		if (map[mid_val] < min)
			first_val = mid_val;
		else if (map[mid_val] > max)
			last_val = mid_val;
		mid_val = (int)((last_val + first_val) / 2);
	}
}

int		binary_search(int ***map, int size, int x, int y)
{
	return (search(map[0][x + size], y, y + size) &&
			search(map[1][y + size], x, x + size));
}
