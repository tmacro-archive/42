/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespace.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 14:29:40 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/20 13:45:59 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *s;

	s = dest;
	while (n > 0 && *src != '\0')
	{
		*s++ = *src++;
		--n;
	}
	while (n > 0)
	{
		*s++ = '\0';
		--n;
	}
	return (dest);
}
int ft_strlen(char *c)
{
	int len;

	len = 0;
	while(*c)
	{
		len++;
		c++;
	}
	return(len);
}

int is_whitespace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char *scan_string(char *c, int offset)
{
	int start;
	int end;
	int i;
	char *tmp;

	start = offset;
	end = 0;
	i = 0;
	while (*c)
	{
		if (!(*c == ' ' || *c == '\n' || *c == '\t'))
			start = i;
		i++;
		c++;
	}
	while (*c)
	{
		if ((*c == ' ' || *c == '\n' || *c == '\t'))
			end = i - 1;
		i++;
		c++;
	}
	tmp = malloc(sizeof(char) * (end - start));
	return (ft_strncpy(tmp, c + start, end - start));
}
	


int count_words(char *c)
{
	int count;

	count = 0;
	while (*c)
	{
		while (is_whitespace(c))
			c++;
		count++;
		while (!is_whitespace(*c))
			c++
	}
	return (count);
}



char **ft_split_whitespace(char *str)
{
	char **buf;
	int offset;
	int word_count;
	char *tmp;
	int counter;

	offset = 0;
	counter = 0;
	buf = malloc(sizeof(char*) * count_words(str));
	word_count = count_words(str);
	while (str[counter])
	{

	while (counter < word_count - 1)
	{
		tmp = scan_string(str, offset);
		offset += ft_strlen(tmp);
		buf[counter] = tmp;
		counter++;
	}
	return (buf);

}


