/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 18:25:40 by epinchon          #+#    #+#             */
/*   Updated: 2016/08/28 21:22:43 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_data.h"

void	process01(t_data *data, int *i, int *j, int *k)
{
	if ((*i == 1 && *j == 1) ||
		(*i == data->y && *j == data->x && *i != 1 && *j != 1))
		data->tmp[*k] = '/';
	else if ((*i == data->y && *j == 1) || (*i == 1 && *j == data->x))
		data->tmp[*k] = '\\';
	else if ((*i == 1 && *j > 1 && *j < data->x) ||
			(*i == data->y && *j > 1 && *j < data->x) ||
			(*j == data->x && *i > 1 && *i < data->y) ||
			(*j == 1 && *i > 1 && *i < data->y))
		data->tmp[*k] = '*';
	else
		data->tmp[*k] = ' ';
	(*k)++;
}

void	rush01(t_data *data)
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
			process01(data, &i, &j, &k);
		data->tmp[k] = '\n';
		k++;
	}
	data->tmp[k - 1] = '\0';
}
