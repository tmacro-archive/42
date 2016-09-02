/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 10:30:52 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/12 13:44:33 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		length(char *str)
{
	int offset;
	int count;

	offset = 0;
	count = 0;
	while (*(str + offset) != '\0')
	{
		++count;
		++offset;
	}
	return (count);
}

char	*ft_strrev(char *str)
{
	int pos1;
	int pos2;
	int size;
	int temp;

	pos1 = 0;
	size = length(str);
	pos2 = size - 1;
	while (pos1 < pos2)
	{
		temp = str[pos1];
		str[pos1] = str[pos2];
		str[pos2] = temp;
		pos1++;
		pos2--;
	}
	return (str);
}
