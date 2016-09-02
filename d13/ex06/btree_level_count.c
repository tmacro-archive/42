/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 15:19:54 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/26 16:38:23 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		btree_level_count(t_btree *root)
{
	int c_left;
	int c_right;

	if (!root)
		return (0);
	c_left = btree_level_count(root->left);
	c_right = btree_level_count(root->right);
	if (c_left > c_right)
		return (c_left + 1);
	return (c_right + 1);
}
