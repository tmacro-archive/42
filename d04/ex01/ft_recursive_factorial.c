/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 12:49:29 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/13 16:10:12 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int result;

	if (nb > 1)
	{
		result = ft_recursive_factorial(nb - 1);
		return (nb * result);
	}
	else if (nb >= 0)
	{
		return (1);
	}
	return (0);
}
