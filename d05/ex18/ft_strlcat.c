/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 22:52:43 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/16 23:17:29 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *c)
{
	int len;

	len = 0;
	while (c[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*s;
	char			*d;
	unsigned int	dlen;
	unsigned int	n;

	s = src;
	n = size;
	d = dest;
	while (*d != '\0' && n-- != 0)
		d++;
	dlen = d - dest;
	n = size - dlen;
	if (n == 0)
		return (dlen + ft_strlen(s));
	while (*s != '\0')
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}
