/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 15:35:38 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/18 23:34:48 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int count_words(char *c);

char **ft_split_whitespace(char *str);

int main()
{
	char **buf;
	int counter;
	char *test = "adcd efgh \nhhhhhh";

	counter = 0;
	buf = ft_split_whitespace(test);
	while (buf[counter])
	{
		printf("%s\n", buf[counter]);
		counter++;
	}
}
