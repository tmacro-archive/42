/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 10:25:35 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/19 10:26:47 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H
# define SAVE_AUSTIN_POWERS "BA! NA!"
# include <string.h>

typedef struct	s_perso
{
	char	*name;
	float	life;
	int		age;
	char	*profession;
}				t_perso;
#endif
