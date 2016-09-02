/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 16:38:55 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/25 22:39:57 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"
#include <errno.h>
#include <stdio.h>

int		print_fd(int fd, int offset, int print)
{
	char buffer[16384];
	int status;
	int size;
	
	size = 0;
	while (1)
	{
		status = read_chunk(fd, buffer, sizeof(char) * 16384);
		if (status > 0)
		{
			if (size >= offset && print)
			{
				if ((size - offset) < status)
					buffer = buffer + (status - (size - offset))
				print_std(buffer, status - (size - offset));
			}
			size += status;
		}
		else if (status < 0)
			return (-1);
	}
	return (size);
}

int		read_file(char *c, int offset, int print)
{
	int size;
	int fd;

	fd = open_file(c);
	if (fd == -1)
	{
		err_print(errno, c);
		return (1);
	}
	size = print_fd(fd, offset, int print);
	if (size < 0)
		err_print(errno, c);
	close_file(fd);
	return (size);
}

int find_neg_ten(int fd)
{
	int lines[100000];
	char buffer[16384];
	int bytes;
	int i;
	int newlines;

	i = 0;
	newlines = 0;
	while(1)
	{
		bytes = read_chunk(fd, buffer, sizeof(char) * 16384);
		if (bytes <= 0)
			break ;
		while (*buffer)
		{
			if (*buffer == '\n')
			{
				lines[newlines] = i;
				newlines++;
			}
			i++
			buffer++;
		}
	}
	return (lines[newlines - 11] + 1);
}


int calc_offset(int fd, int line, int bytes)
{

	if (line)
		return (find_neg_ten(fd));
	else
	{
		if (bytes < 0)
			return (print_fd(fd) + bytes);
		else
			return (bytes);
	}
}
