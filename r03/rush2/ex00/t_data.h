/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_data.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/28 21:14:38 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/28 21:25:43 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_DATA_H
# define T_DATA_H
# define SIZE		1000

typedef struct			s_data
{
	int					y;
	int					x;
	int					*rush;
	char				*buffer;
	char				*string;
	char				*tmp;
}						t_data;

#endif
