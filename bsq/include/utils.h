/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uitls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/30 13:18:29 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/31 23:30:24 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

char	*read_input(int fd);
void	ft_strcpy(char *dest, char *src);
void	ft_strcat(char *dest, char *src);
char	*allocate_char_buffer(int size);
void	print_std(char *s, int size);
void	print_error(char *s);
void	write_buffer(int fd, char *s, int size);
char	**split_by_line(char *string);
int		open_file(char *filename);
int		ft_strlen(char *s);
int		ft_atoi(char *s);
int		*allocate_int_buffer(int size);
int		*extend_int_buffer(int *buf, int old, int size);
int		count_digits(int num);
int		*create_three_tuple(int x, int y, int z);
void	print_solution(char **map, int x, int y, int size);
char	*extend_char_buffer(char *o, char *i, int s);
#endif
