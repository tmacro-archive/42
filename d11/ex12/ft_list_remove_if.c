/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 22:14:11 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/24 22:51:47 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*prev;
	t_list	*current;
	t_list	*head;

	if (!(*begin_list))
		return ;
	prev = *begin_list;
	current = *begin_list;
	head = *begin_list;
	while (current)
	{
		if ((*cmp)(current->data, data_ref) == 0)
		{
			if (current == head)
				head = current->next;
			else
				prev->next = current->next;
			free(current);
		}
		prev = current;
		current = current->next;
	}
	*begin_list = head;
}
