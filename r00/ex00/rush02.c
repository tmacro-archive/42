/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lepetit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 13:18:15 by lepetit           #+#    #+#             */
/*   Updated: 2016/08/14 13:18:17 by lepetit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if ((j == 1 && i == 1) || (j == x && i == 1))
				ft_putchar(65);
			else if (j == 1 && i == y && i != 1)
				ft_putchar(67);
			else if (j == x && i == y)
				ft_putchar(67);
			else if (j != 1 && j != x && i != 1 && i != y)
				ft_putchar(32);
			else
				ft_putchar(66);
			j++;
		}
		ft_putchar(10);
		i++;
	}
}
