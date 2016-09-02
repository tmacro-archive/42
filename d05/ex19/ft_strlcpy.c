/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 23:01:00 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/16 23:15:29 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char			*d;
	unsigned int	len;

	d = dest;
	len = ft_strlen(src);
	if (!size)
	{
		dest[0] = '\0';
		return (len);
	}
	while (*src != '\0')
	{
		if (size != 1)
		{
			*d++ = *src;
			size--;
		}
		src++;
	}
	return (len);
}
