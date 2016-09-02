/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lepetit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 11:42:01 by lepetit           #+#    #+#             */
/*   Updated: 2016/08/14 13:38:15 by tmckinno         ###   ########.fr       */
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
			if ((j == x && i == 1) || (j == 1 && i == y))
				ft_putchar(111);
			else if ((j == 1 && i == 1) || (j == x && i == y))
				ft_putchar(111);
			else if (j != 1 && j != x && i != 1 && i != y)
				ft_putchar(32);
			else if (i == 1 || i == y)
				ft_putchar(45);
			else if (j == 1 || j == x)
				ft_putchar(124);
			j++;
		}
		ft_putchar(10);
		i++;
	}
}
