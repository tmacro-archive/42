/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 18:51:23 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/18 20:18:38 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define AM "A.M."
#define PM "P.M."
#define LINE "THE FOLLOWING TAKES PLACE BETWEEN %i.00 %s AND %i.00 %s\n"

#include <stdio.h>

void	ft_strcpy(char *dest, char *src)
{
	char *d;

	d = dest;
	while ((*d++ = *src++) != '\0')
		;
}

int		adjust_time(int hour)
{
	while ((hour % 10 != 4) && hour > 23)
		hour = hour / 10;
	return (hour);
}

void	ft_takes_place(int hour)
{
	char	first[5];
	char	second[5];
	int		begin;
	int		end;

	hour = adjust_time(hour);
	begin = hour;
	if (hour == 0)
		begin = 12;
	if (hour > 12)
		begin -= 12;
	end = hour + 1;
	if (end == 13)
		end = 1;
	if (end > 12)
		end -= 12;
	if (hour > 11 && hour < 24)
		ft_strcpy(first, PM);
	else
		ft_strcpy(first, AM);
	if (hour + 1 > 11 && hour + 1 < 24)
		ft_strcpy(second, PM);
	else
		ft_strcpy(second, AM);
	printf(LINE, begin, first, end, second);
}
