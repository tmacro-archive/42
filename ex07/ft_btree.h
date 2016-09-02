/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgaudet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 00:10:10 by fgaudet           #+#    #+#             */
/*   Updated: 2016/08/26 19:07:56 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

# include <stdio.h>
# include <stdlib.h>

typedef struct			s_btree
{
	struct s_btree		*left;
	struct s_btree		*right;
	void				*item;
}						t_btree;

typedef struct			s_frame
{
	t_btree				node;
	struct s_frame		*next;
}						t_frame;

t_btree					*btree_create_node(void *);
void					push_frame(t_frame **stack, t_frame *frame);
t_frame					*pop_frame(t_frame **stack);
void					create_frame(t_btree *node);
#endif
