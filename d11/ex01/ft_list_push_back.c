/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 15:59:11 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/24 21:33:37 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *current;
	t_list *new;

	new = ft_create_elem(data);
	if (!*begin_list)
	{
		*begin_list = new;
		return ;
	}
	current = *begin_list;
	while (current->next != NULL)
		current = current->next;
	current->next = new;
}
