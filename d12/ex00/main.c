/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 12:32:38 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/25 23:22:23 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display.h"

int		main(int argc, char **argv)
{
	char	buffer[129];
	int		fd;
	int		status;

	if (argc == 1)
		return (print_error("File name missing.\n") || (1));
	else if (argc > 2)
		return (print_error("Too many arguments.\n") || (1));
	fd = open_file(argv[1]);
	while (fd > 0)
	{
		status = read_chunk(fd, buffer, sizeof(char) * 128);
		if (status)
			print_std(buffer, status);
		else
		{
			close_file(fd);
			break ;
		}
	}
	return (0);
}
