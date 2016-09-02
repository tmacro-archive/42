/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 14:34:56 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/26 16:37:52 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	void *ret;

	if (!root)
		return (0);
	ret = btree_search_item(root->left, data_ref, cmpf);
	if (ret)
		return (ret);
	if ((*cmpf)(data_ref, root->item) == 0)
		return (root);
	ret = btree_search_item(root->right, data_ref, cmpf);
	if (ret)
		return (ret);
	return (0);
}
