/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 15:08:12 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/18 14:17:49 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return ((len + 1) * sizeof(*str));
}

char	*ft_strcpy(char *dest, char *src)
{
	char *d;

	d = dest;
	while ((*d++ = *src++) != '\0')
		;
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*ret;
	int		size;

	size = ft_strlen(src);
	ret = malloc(size + 1);
	if (ret)
		return (ft_strcpy(ret, src));
	else
		return (NULL);
}
