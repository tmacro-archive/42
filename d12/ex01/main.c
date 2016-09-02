/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 12:32:38 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/25 21:29:25 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"
#include <errno.h>
#include <string.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	ft_set_progname(argv[0]);
	if (argc == 1)
		print_fd(0);
	else if (argc > 1)
	{
		argv++;
		while (*argv)
		{
			if (**argv == '-')
				print_fd(0);
			else
				read_file(*argv);
			argv++;
		}
	}
	return (0);
}
