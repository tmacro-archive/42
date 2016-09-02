/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/30 13:12:48 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/31 23:28:57 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#define CHUNK_SIZE 4096

int		open_file(char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY, S_IREAD);
	return (fd);
}

int		close_file(int fd)
{
	return (close(fd));
}

int		read_chunk(int fd, char *buffer, int size)
{
	int bytes_read;

	bytes_read = read(fd, buffer, size);
	if (bytes_read > 0)
		buffer[bytes_read] = '\0';
	else
		buffer[0] = '\0';
	return (bytes_read);
}

char	*read_input(int fd)
{
	char	*input;
	char	*output;
	char	*tmp;
	int		status;
	int		size;

	input = allocate_char_buffer(CHUNK_SIZE);
	output = allocate_char_buffer(0);
	output[0] = '\0';
	status = 1;
	size = 0;
	while (status > 0)
	{
		status = read_chunk(fd, input, CHUNK_SIZE);
		if (status > 0)
		{
			size += status;
			output = extend_char_buffer(output, input, size);
		}
	}
	if (fd != 0)
		close_file(fd);
	output[size] = '\0';
	return (output);
}
