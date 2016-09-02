/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 15:51:20 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/24 21:38:14 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int		index;

	index = 1;
	while (begin_list)
	{
		if (index == nbr)
			return (begin_list);
		index++;
		begin_list = begin_list->next;
	}
	return (NULL);
}
