/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 22:32:45 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/23 22:45:26 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_advanced_sort_wordtab(char **tab, int(*cmp)(char *, char *));


int		ft_strcmp(char *s1, char *s2)
{
	int sign;

	sign = 0;
	if (!*s1)
		return (-*s2);
	while (*s1)
	{
		if (*s1 != *s2++)
			return (*(const unsigned char*)s1 - *(const unsigned char*)--s2);
		else if (*s1++ == '0')
			return (0);
	}
	return (0);
}

int main(int argc, char **argv)
{
	(void)argc;
	ft_advanced_sort_wordtab(argv, &ft_strcmp);
	while (*argv)
	{
		printf("%s\n", *argv);
		argv++;
	}
}
