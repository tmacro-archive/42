/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 18:25:33 by epinchon          #+#    #+#             */
/*   Updated: 2016/08/28 21:25:09 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_data.h"

void	process00(t_data *data, int *i, int *j, int *k)
{
	if ((*i == 1 && *j == 1) || (*i == 1 && *j == data->x) ||
		(*i == data->y && *j == 1) || (*i == data->y && *j == data->x))
		data->tmp[*k] = 'o';
	else if ((*i == 1 && *j > 1 && *j < data->x) ||
			(*i == data->y && *j > 1 && *j < data->x))
		data->tmp[*k] = '-';
	else if ((*j == data->x && *i > 1 && *i < data->y) ||
			(*j == 1 && *i > 1 && *i < data->y))
		data->tmp[*k] = '|';
	else
		data->tmp[*k] = ' ';
	(*k)++;
}

void	rush00(t_data *data)
{
	int		i;
	int		j;
	int		k;

	if (data->y < 1 || data->x < 1)
		return ;
	i = 0;
	k = 0;
	while (++i <= data->y)
	{
		j = 0;
		while (++j <= data->x)
			process00(data, &i, &j, &k);
		data->tmp[k] = '\n';
		k++;
	}
	data->tmp[k - 1] = '\0';
}
