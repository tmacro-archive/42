/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 12:50:50 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/22 13:07:27 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *ret;
	int i;

	ret = malloc(sizeof(int) * length + 1);
	i = 0;
	while (i < length)
	{
		ret[i] = (*f)(tab[i]);
		i++;
	}
	return (ret);
}
