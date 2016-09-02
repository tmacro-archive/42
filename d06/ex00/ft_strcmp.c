/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 16:16:48 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/16 22:49:06 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
