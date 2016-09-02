/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 00:02:05 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/19 00:09:15 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	if (base % 2 == 0)
		return (ft_collatz_conjecture(base / 2) + 1);
	else
		return (ft_collatz_conjecture((base * 3) + 1) + 1);
}
