/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 15:48:07 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/24 21:39:50 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *temp;

	while (*begin_list)
	{
		temp = (*begin_list)->next;
		free(*begin_list);
		*begin_list = temp;
	}
	*begin_list = NULL;
}
