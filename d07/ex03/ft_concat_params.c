/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 22:12:51 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/18 23:38:57 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		calc_buffer(int argc, char **argv)
{
	int i;
	int j;
	int len;

	i = 1;
	len = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			len++;
			j++;
		}
		i++;
	}
	len = len + argc - 2;
	if (len > 0)
		return (len * sizeof(char));
	else
		return (0);
}

void	fill_buffer(char *buffer, char **args)
{
	char *tmp;

	args++;
	while (*args)
	{
		tmp = *args;
		while (*tmp)
		{
			*buffer = *tmp;
			tmp++;
			buffer++;
		}
		*buffer = '\n';
		buffer++;
		args++;
	}
	buffer -= 1;
	*buffer = '\0';
}

char	*ft_concat_params(int argc, char **argv)
{
	char *buf;

	buf = malloc(calc_buffer(argc, argv));
	if (buf)
	{
		fill_buffer(buf, argv);
	}
	return (buf);
}
