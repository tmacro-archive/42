/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 13:51:38 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/26 16:37:03 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	if (!*root)
		*root = CREATE_NODE(item);
	else
	{
		if ((*cmpf)(item, (*root)->item) < 0)
			btree_insert_data(&(*root)->left, item, cmpf);
		else if ((*cmpf)(item, (*root)->item) >= 0)
			btree_insert_data(&(*root)->right, item, cmpf);
	}
}
