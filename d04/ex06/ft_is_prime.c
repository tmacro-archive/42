/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 20:09:55 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/13 20:18:32 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int divisor;

	divisor = 2;
	if (nb <= 1)
		return (0);
	while (divisor < nb)
	{
		if (nb % divisor == 0)
		{
			return (0);
		}
		divisor++;
	}
	return (1);
}
