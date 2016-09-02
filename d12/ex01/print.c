/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 12:28:43 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/25 20:38:16 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void	print_std(char *buffer, int size)
{
	write_buffer(1, buffer, size);
}

void	print_error(char *buffer)
{
	write_buffer(2, buffer, 0);
}
