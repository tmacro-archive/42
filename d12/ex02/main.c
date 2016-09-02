/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 12:32:38 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/25 23:14:17 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"
#include <errno.h>
#include <string.h>
#include <stdio.h>

int parse_args(char *c)
{
	int i;
	int res;

	i = 0;
	while (c + i)
	{
		if ((c + i) == '-' && (c + i + 1) == 'c')
		{
			res = ft_atoi(*c + i + 2);
			if (c + i + 3 != '-')
				return (res + -1);
			else
				return (res);
		}
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int size;
	int offset;

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
				
				size = read_file(*argv);
			argv++;
		}
	}
	return (0);
}
