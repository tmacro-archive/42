/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 18:25:57 by epinchon          #+#    #+#             */
/*   Updated: 2016/08/28 21:23:08 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_data.h"

void	process04(t_data *data, int *i, int *j, int *k)
{
	if ((*i == 1 && *j == 1) ||
		(*i == data->y && *j == data->x && *i != 1 && *j != 1))
		data->tmp[*k] = 'A';
	else if ((*i == data->y && *j == 1) || (*i == 1 && *j == data->x))
		data->tmp[*k] = 'C';
	else if ((*i == 1 && *j > 1 && *j < data->x) ||
			(*i == data->y && *j > 1 && *j < data->x) ||
			(*j == data->x && *i > 1 && *i < data->y) ||
			(*j == 1 && *i > 1 && *i < data->y))
		data->tmp[*k] = 'B';
	else
		data->tmp[*k] = ' ';
	(*k)++;
}

void	rush04(t_data *data)
{
	int		i;
	int		j;
	int		k;

	if (data->x < 1 || data->y < 1)
		return ;
	i = 0;
	k = 0;
	while (++i <= data->y)
	{
		j = 0;
		while (++j <= data->x)
			process04(data, &i, &j, &k);
		data->tmp[k] = '\n';
		k++;
	}
	data->tmp[k - 1] = '\0';
}
