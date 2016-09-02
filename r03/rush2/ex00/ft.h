/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 18:25:18 by epinchon          #+#    #+#             */
/*   Updated: 2016/08/27 18:25:20 by epinchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_H
# define _FT_H
# include "t_data.h"

int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
int		ft_count_arguments(t_data *data);
char	*ft_strcat_m(char *dest, char *src);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_putresult(char *rush, int x, int y);
void	ft_putstr_s(char *str, t_data *data, int c);

void	rush00(t_data *data);
void	rush01(t_data *data);
void	rush02(t_data *data);
void	rush03(t_data *data);
void	rush04(t_data *data);

#endif
