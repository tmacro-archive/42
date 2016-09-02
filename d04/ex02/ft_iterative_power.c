/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 16:12:00 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/13 16:23:49 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	while (power > 0)
	{
		result = nb * result;
		power--;
	}
	return (result);
}
