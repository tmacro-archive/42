/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 12:16:34 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/25 22:49:47 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_H
# define FT_DISPLAY_H

# include <fcntl.h>
# include <unistd.h>

int		open_file(char *filename);
int		read_chunk(int fd, char *buffer, int size);
int		close_file(int fd);
void	write_buffer(int fd, char *buffer, int size);
void	print_std(char *buffer, int size);
void	print_error(char *buffer);
void	ft_set_progname(char *argv0);
int		print_fd(int fd);
int		read_file(char *filename);
int		err_print(int errno, char *filename);
int		ft_atoi(char *s);
#endif
