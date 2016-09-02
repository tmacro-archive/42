/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 23:50:38 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/18 23:58:12 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ultimator.h>
#include <stdio.h>

void	ft_destroy(char ***factory)
{
	char *tmp;
	char **tmp2;
	
	tmp2 = *factory;
	while(tmp2)
	{
		tmp = *tmp2;
		while(tmp)
		{
			free(*tmp);
			tmp++
		}
		free(tmp2);
		tmp2++;
	}
	free(factory);
}
