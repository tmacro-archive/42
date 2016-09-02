/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 19:17:50 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/21 19:51:21 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	while (*s)
	{
		ft_putchar(*s);
		s++;
	}
}

int		ft_strlen(char *s)
{
	int len;

	len = 0;
	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}

void	print_error(void)
{
	ft_putstr("Error\n");
}
