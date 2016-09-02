/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 16:38:55 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/25 21:37:57 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"
#include <errno.h>
#include <stdio.h>

int		print_fd(int fd)
{
	char	buffer[16384];
	int		status;

	while (1)
	{
		status = read_chunk(fd, buffer, sizeof(char) * 16384);
		if (status > 0)
			print_std(buffer, status);
		else
			return (1);
	}
	return (0);
}

int		read_file(char *c)
{
	int err;
	int fd;

	fd = open_file(c);
	if (fd == -1)
	{
		err_print(errno, c);
		return (1);
	}
	err = print_fd(fd);
	if (err)
		err_print(errno, c);
	close_file(fd);
	return (0);
}
