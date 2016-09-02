/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 12:05:00 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/25 23:22:39 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display.h"
#include <fcntl.h>
#include <unistd.h>

int		open_file(char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY, S_IREAD);
	return (fd);
}

int		read_chunk(int fd, char *buffer, int size)
{
	int status;

	status = read(fd, buffer, size);
	buffer[status] = '\0';
	return (status);
}

int		close_file(int fd)
{
	return (close(fd));
}

void	write_buffer(int fd, char *buffer, int size)
{
	if (size > 0)
		write(fd, buffer, size);
	else
	{
		while (*buffer)
		{
			write(fd, buffer, 1);
			buffer++;
		}
	}
}
