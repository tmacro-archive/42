/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 08:27:19 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/19 09:00:15 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define KW1 "attack"
#define KW2 "president"
#define KW3 "powers"
#include <unistd.h>
#include <stdio.h>

char *strip_whitespace(char *str)
{
	char	*tmp;
	char	*beg;
	int		in_word;

	in_word = 0;
	tmp = str;

	while (*tmp)
	{
		if (*tmp >= 97 && *tmp <= 122 && !in_word)
		{
			beg = tmp;
			in_word = 1;
		}
		if (((*tmp >= 9 && *tmp <= 13) || *tmp == 32) && in_word)
		{
			*tmp = '\0';
			return (beg);
		}
		tmp++;
	}
	return (beg);
}

char *lower(char *str)
{
	char *tmp;

	tmp = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (tmp);			
}

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

int		main(int argc, char **argv)
{
	int		counter;
	char	*tmp;

	argc = argc - 0;
	counter = 1;
	while (argv[counter])
	{
		tmp = lower(argv[counter]);
		tmp = strip_whitespace(tmp);
		if (ft_strcmp(tmp, KW1) == 0 || ft_strcmp(tmp, KW2) == 0 ||
				ft_strcmp(tmp, KW3) == 0)
		{
			write(1, "Alert!!!\n", 9);
			break ;
		}
		counter++;
	}
}
