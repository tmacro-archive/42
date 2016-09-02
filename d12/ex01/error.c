/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 18:48:01 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/25 21:26:37 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_cat.h"

char		*g_progname;

const char	*ft_strerror(int errnum)
{
	if (errnum < 0)
		errnum = -errnum;
	if (errnum < sys_nerr)
	{
		return (sys_errlist[errnum]);
	}
	return ("Unknown error");
}

void		ft_set_progname(char *argv0)
{
	char *slash;

	slash = 0;
	while (*argv0)
	{
		if (*argv0 == '/')
			slash = argv0;
		argv0++;
	}
	if (slash)
		g_progname = slash + 1;
	else
		g_progname = argv0;
}

const char	*ft_progname(void)
{
	return (g_progname);
}

int			err_print(int eno, char *filename)
{
	if (eno == 0)
		return (0);
	print_error((char*)ft_progname());
	print_error(": ");
	print_error(filename);
	print_error(": ");
	print_error((char*)ft_strerror(eno));
	print_error("\n");
	return (1);
}
