/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 18:46:08 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/17 22:10:20 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *ret;
	int len;

	len = max - min;
	if (min < max)
	{
		ret = malloc(len + 1);
		if (ret)
		{
			*range = ret;
			while (min < max)
			{
				*ret = min;
				ret++;
				min++;
			}
			return (len);
		}
	}
	*range = NULL;
	return (0);
}
