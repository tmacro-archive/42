/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 16:25:01 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/13 18:31:42 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	else if (power == 1)
		return (nb);
	else if (power == 0)
		return (1);
	return (0);
}
