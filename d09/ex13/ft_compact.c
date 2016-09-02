/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 11:23:44 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/19 13:46:42 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_compact(char **tab, int length)
{
	int count;
	int offset;

	count = 0;
	offset = 0;
	while (count < length)
	{
		if (!*tab[count])
		{
			offset -= 1;
		}
		tab[count + offset] = tab[count];
		count++;
	}
	return (length + offset);
}
