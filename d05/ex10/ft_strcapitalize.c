/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 03:50:00 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/16 21:35:17 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		char_type(char c)
{
	if (c >= 97 && c <= 122)
		return (-1);
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 48 && c <= 57)
		return (2);
	return (0);
}

char	cap_letter(char c)
{
	if (char_type(c) == -1)
		c -= 32;
	return (c);
}

char	lower_letter(char c)
{
	if (char_type(c) == 1)
		c += 32;
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int		state;
	char	*s;

	state = 0;
	s = str;
	if (char_type(*s) < 0)
	{
		*s = cap_letter(*s);
		s++;
	}
	while (*s)
	{
		if (char_type(*s) == 0)
			state = 1;
		else if (state > 0)
		{
			*s = cap_letter(*s);
			state = -1;
		}
		else if (state < 0)
			*s = lower_letter(*s);
		s++;
	}
	return (str);
}
