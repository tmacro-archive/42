/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 18:21:26 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/23 21:25:15 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_H
# define DOOP_H

# include <unistd.h>

typedef int		(*t_aop)(int, int);
typedef	struct	s_opp
{
	char		*opp;
	t_aop		func;
}				t_opp;
int				ft_mul(int x, int y);
int				ft_add(int x, int y);
int				ft_sub(int x, int y);
int				ft_div(int x, int y);
int				ft_mod(int x, int y);
int				ft_atoi(char *c);
void			ft_putnbr(int x);
void			ft_putstr(char *s);
void			ft_putchar(char c);
int				ft_strlen(char *c);
#endif
