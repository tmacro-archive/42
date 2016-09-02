/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/30 17:30:46 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/31 22:16:23 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVE_H
# define SOLVE_H

char	**load_map(char *filename, int fd);
int		*solve_map(int ***ob_set, int x, int y);
int		***create_obstacle_set(char **map);
int		binary_search(int ***ob_set, int size, int x, int y);
int		search(int *set, int min, int max);
#endif
