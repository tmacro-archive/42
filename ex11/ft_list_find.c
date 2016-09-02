/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 18:40:58 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/24 18:45:05 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	while (*begin_list)
	{
		if ((*cmp)(begin_list->data, data_ref) == 0)
			return(begin_list);
		begin_list = begin_list->next;
	}
	return (NULL);
}
