/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 14:34:37 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/16 19:53:33 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int offset;

	offset = 0;
	while (*(str + offset) != '\0')
		++offset;
	return (offset);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int count;

	i = -1;
	count = 0;
	if (!to_find)
		return (str);
	while (i++ < ft_strlen(str) - ft_strlen(to_find))
	{
		j = -1;
		while (j++ < ft_strlen(to_find))
		{
			if (str[i + j] == to_find[j])
				count++;
			else
				count = 0;
			if (count == ft_strlen(to_find))
				return (&str[i]);
		}
	}
	return ((void*)0);
}
