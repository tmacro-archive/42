/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 21:25:37 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/18 21:56:58 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	rot42(char c)
{
	char base;

	base = 0;
	if (c >= 'a' && c <= 'z')
		base = 'a';
	else if (c >= 'A' && c <= 'Z')
		base = 'A';
	else
		return (c);
	return ((((c - base) + 42) % 26) + base);
}

char	*ft_rot42(char *str)
{
	char *ret;

	ret = str;
	while (*str)
	{
		*str = rot42(*str);
		str++;
	}
	return (ret);
}
