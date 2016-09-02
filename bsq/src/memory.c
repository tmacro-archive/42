/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 14:51:03 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/31 23:30:22 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "utils.h"

char	*allocate_char_buffer(int size)
{
	char *ret;

	ret = (char*)malloc(sizeof(char) * (size + 1));
	return (ret);
}

int		*allocate_int_buffer(int size)
{
	int *ret;

	ret = (int*)malloc(sizeof(int) * size);
	return (ret);
}

int		*extend_int_buffer(int *buf, int old, int size)
{
	int	*ret;
	int i;

	i = 0;
	ret = allocate_int_buffer(size);
	while (i < old)
	{
		ret[i] = buf[i];
		i++;
	}
	free(buf);
	return (ret);
}

int		*create_three_tuple(int x, int y, int z)
{
	int *ret;

	ret = allocate_int_buffer(3);
	ret[0] = x;
	ret[1] = y;
	ret[2] = z;
	return (ret);
}

char	*extend_char_buffer(char *output, char *input, int size)
{
	char *ret;
	char *tmp;

	ret = allocate_char_buffer(size);
	ft_strcpy(ret, output);
	ft_strcat(ret, input);
	free(output);
	return (ret);
}
