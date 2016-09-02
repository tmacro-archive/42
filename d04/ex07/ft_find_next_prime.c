/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 20:25:07 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/13 21:09:58 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int divisor;
	int prime;

	if (nb < 2)
		nb = 2;
	while (1)
	{
		divisor = 2;
		prime = 1;
		while (divisor < nb)
		{
			if (nb % divisor == 0 && nb > 1)
			{
				prime = 0;
				break ;
			}
			divisor++;
		}
		if (prime)
			return (nb);
		nb++;
	}
}
