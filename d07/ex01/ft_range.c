/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 16:07:03 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/18 14:21:32 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int *ret;
	int *i;

	if (min >= max)
		return (NULL);
	ret = malloc(sizeof(int) * (max - min + 1));
	i = ret;
	if (i)
	{
		while (min < max)
		{
			*i = min;
			min++;
			i++;
		}
		return (ret);
	}
	return (NULL);
}
