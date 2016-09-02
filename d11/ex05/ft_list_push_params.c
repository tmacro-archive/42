/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 13:56:10 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/24 21:49:14 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list *head;
	t_list *tmp;

	head = NULL;
	av++;
	while (*av)
	{
		tmp = ft_create_elem(*av);
		tmp->next = head;
		head = tmp;
		av++;
	}
	return (head);
}
