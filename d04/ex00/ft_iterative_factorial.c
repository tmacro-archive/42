/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 02:32:53 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/13 20:06:13 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fact;
	int current;

	current = nb - 1;
	fact = nb;
	while (current > 0)
	{
		fact = current * fact;
		current--;
	}
	return (fact);
}
