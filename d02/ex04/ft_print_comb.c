/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 08:13:56 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/11 23:41:23 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c);

void	print_combo(char nbr0, char nbr1, char nbr2)
{
	ft_putchar(nbr0);
	ft_putchar(nbr1);
	ft_putchar(nbr2);
	if (!(nbr0 == '7' && nbr1 == '8' && nbr2 == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char nbr0;
	char nbr1;
	char nbr2;

	nbr0 = '0';
	nbr1 = '1';
	nbr2 = '2';
	while (nbr0 <= '9')
	{
		while (nbr1 <= '9')
		{
			while (nbr2 <= '9')
			{
				print_combo(nbr0, nbr1, nbr2);
				nbr2++;
			}
			nbr2 = nbr1 + 2;
			nbr1++;
		}
		nbr1 = nbr0 + 1;
		nbr0++;
	}
	ft_putchar('\n');
}
