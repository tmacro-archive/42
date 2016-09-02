/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 18:25:25 by epinchon          #+#    #+#             */
/*   Updated: 2016/08/30 17:24:40 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft.h"
#include "t_data.h"

void	ft_get_drawing_dimensions(t_data *data)
{
	int		i;

	i = 0;
	while (data->string[i] != '\0')
	{
		if (data->string[i] == '\n' && data->string[i + 1] != '\0')
			data->y = data->y + 1;
		i++;
	}
}

void	ft_put_rush(t_data *data, int nb_arg)
{
	int		i;
	int		counter;

	i = 0;
	counter = 1;
	while (i < nb_arg)
	{
		if (data->rush[0] && counter++)
			ft_putstr_s("[rush-00] [", data, 0);
		else if (data->rush[1] && counter++)
			ft_putstr_s("[rush-01] [", data, 1);
		else if (data->rush[2] && counter++)
			ft_putstr_s("[rush-02] [", data, 2);
		else if (data->rush[3] && counter++)
			ft_putstr_s("[rush-03] [", data, 3);
		else if (data->rush[4] && counter++)
			ft_putstr_s("[rush-04] [", data, 4);
		if (counter <= nb_arg)
			ft_putstr(" || ");
		i++;
	}
}

int		ft_check_pattern(t_data *data)
{
	int		rush_counter;

	rush_counter = 1;
	/* if (data->string[0] == '\0') */
		/* return (-1); */
	rush00(data);
	if (!ft_strcmp(data->string, data->tmp) && rush_counter++)
		data->rush[0] = 1;
	rush01(data);
	if (!ft_strcmp(data->string, data->tmp) && rush_counter++)
		data->rush[1] = 1;
	rush02(data);
	if (!ft_strcmp(data->string, data->tmp) && rush_counter++)
		data->rush[2] = 1;
	rush03(data);
	if (!ft_strcmp(data->string, data->tmp) && rush_counter++)
		data->rush[3] = 1;
	rush04(data);
	if (!ft_strcmp(data->string, data->tmp) && rush_counter++)
		data->rush[4] = 1;
	return (rush_counter);
}

void	set_data_struct(t_data *data)
{
	int		i;
	int		ret;

	data->rush = (int *)malloc(sizeof(int) * 5);
	i = 0;
	while (i < 5)
		data->rush[i++] = 0;
	data->buffer = (char *)malloc(sizeof(char) * SIZE + 1);
	data->string = (char *)malloc(sizeof(char) * SIZE + 1);
	i = 0;
	while ((ret = read(0, data->buffer, SIZE)))
	{
		data->buffer[ret] = '\0';
		data->string = ft_strcat_m(data->string, data->buffer);
		i++;
	}
	data->tmp = (char *)malloc(sizeof(char) * ft_strlen(data->string) + 1);
	data->y = 1;
	ft_get_drawing_dimensions(data);
	data->x = ft_strlen(data->string) / data->y;
}

int		main(void)
{
	int		count;
	t_data	data;

	set_data_struct(&data);
	if (ft_check_pattern(&data) <= 1)
	{
		ft_putstr("aucune\n");
		return (0);
	}
	count = ft_count_arguments(&data);
	ft_put_rush(&data, count);
	free(data.buffer);
	free(data.tmp);
	free(data.string);
	if (data.x == data.y)
		ft_putstr_s(" || [carre] [", &data, 1);
	if (data.x > 2 && data.y > 2)
		ft_putstr_s(" || [rectangle] [", &data, 1);
	ft_putchar('\n');
	return (0);
}
