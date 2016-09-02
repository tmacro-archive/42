/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 12:55:52 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/22 13:18:14 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_any(char **tab, int (*f)(char*));

int		test(char *s)
{
	printf("%s\n", s);
	if (s[0] == 'A')
		return (1);
	return (0);
}

int main(int argc, char **argv)
{
	argc = argc - 0;
	printf("%i\n", ft_any(argv, &test));
	return (0);
}

