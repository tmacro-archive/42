/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 14:32:15 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/27 16:35:02 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush.h"
#include <stdlib.h>

#define CHUNK_SIZE 128

int		read_chunk(int fd, char *buffer, int size)
{
	int bytes_read;

	bytes_read = read(fd, buffer, size);
	if (bytes_read >= 0)
		buffer[bytes_read] = '\0';
	else
		buffer[0] = '\0';
	return (bytes_read);
}

void	ft_strcpy(char *dest, char *src)
{
	while ((*dest++ = *src++) != 0)
		;
}

char	*ft_strcat(char *dest, char *src)
{
	char *s;

	s = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (s);
}

char *read_input(fd)
{
	char	*input;
	char	*output;
	char	*tmp;
	int		status;
	int		size;


	input = allocate_buffer(CHUNK_SIZE);
	output = allocate_buffer(0);
	output[0] = '\0';
	status = 1;
	size = 0;
	while (status > 0)
	{
		status = read_chunk(fd, input, CHUNK_SIZE);
		if (status > 0)
		{
			size += status;
			tmp = allocate_buffer(size);
			ft_strcpy(tmp, output);
			ft_strcat(tmp, input);
			free(output);
			output = allocate_buffer(size);
			ft_strcpy(output, tmp);
			free(tmp);
		}
	}
	return (output);
}
