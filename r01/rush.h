/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 18:59:05 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/21 19:54:43 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

void	print_board(int board[][9]);
int		load_board(char **argv, int board[][9]);
int		incr_row(int row, int col);
int		incr_col(int row, int col);
void	print_error();
int		ft_strlen(char *s);
void	ft_putchar(char c);
#endif
