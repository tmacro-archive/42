/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 10:30:52 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/12 10:55:01 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int offset;
	int count;

	offset = 0;
	count = 0;
	while (*(str + offset) != '\0')
	{
		++count;
		++offset;
	}
	return (count);
}