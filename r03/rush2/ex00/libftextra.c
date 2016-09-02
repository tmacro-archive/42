/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftextra.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 18:26:18 by epinchon          #+#    #+#             */
/*   Updated: 2016/08/27 18:26:19 by epinchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "t_data.h"
#include "ft.h"

char	*ft_strcat_m(char *dest, char *src)
{
	int		i;
	int		j;
	char	*rst;

	i = -1;
	j = 0;
	rst = (char *)malloc(sizeof(char) * ft_strlen(dest) + ft_strlen(src) + 1);
	while (dest[++i] != '\0')
		rst[i] = dest[i];
	while (src[j] != '\0')
	{
		rst[i] = src[j];
		j++;
		i++;
	}
	rst[i] = '\0';
	free(dest);
	return (rst);
}

void	ft_putstr_s(char *str, t_data *data, int c)
{
	while (*str)
		ft_putchar(*str++);
	ft_putnbr(data->x);
	ft_putchar(']');
	ft_putchar(' ');
	ft_putchar('[');
	ft_putnbr(data->y);
	ft_putchar(']');
	data->rush[c] = 0;
}

int		ft_count_arguments(t_data *data)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (i < 5)
	{
		if (data->rush[i])
			count++;
		i++;
	}
	return (count);
}
