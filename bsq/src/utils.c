/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 14:32:15 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/31 01:41:55 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strcpy(char *dest, char *src)
{
	while ((*dest++ = *src++) != 0)
		;
}

char	*ft_strcat(char *dest, char *src)
{
	char *s;

	s = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (s);
}

int		ft_strlen(char *s)
{
	int len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

int		count_digits(int num)
{
	int digits;

	digits = 0;
	while (num > 0)
	{
		num /= 10;
		digits++;
	}
	return (digits);
}
