/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 22:32:45 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/23 22:35:58 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_wordtab(char **tab);

int main(int argc, char **argv)
{
	(void)argc;
	ft_sort_wordtab(argv);
	while (*argv)
	{
		printf("%s\n", *argv);
		argv++;
	}
}
