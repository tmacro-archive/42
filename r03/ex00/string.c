/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 15:08:54 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/27 16:33:49 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include <stdlib.h>
#include <stdio.h>

int		count_lines(char *s)
{
	int lines;

	lines = 0;
	while (*s)
	{
		if (*s == '\n')
			lines++;
		s++;
	}
	return (lines - 1);
}

int line_size(char *s)
{
	int size;
	
	size = 0;
	while (*s && *s != '\n')
	{
		size++;
		s++;
	}
	return (size);
}
	
char	**split_by_line(char *s)
{
	char	**output;
	int		lines;
	char	*tmp;
	char	*tmp_begin;
	int		i;

	lines = count_lines(s);
	i = 0;
	output = (char**)malloc(sizeof(char*) * (lines + 1));
	while (*s)
	{
		tmp = allocate_buffer(line_size(s) + 1);
		tmp_begin = tmp;
		while (*s != '\n')
		{
			*tmp = *s;
			tmp++;
			s++;
		}
		tmp++;
		s++;
		*tmp = '\0';
		output[i] = tmp_begin;
		i++;
	}
	output[i] = 0;
	return (output);
}
