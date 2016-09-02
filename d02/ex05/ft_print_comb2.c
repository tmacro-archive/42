/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 10:45:54 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/11 23:34:52 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void	print_digits(char a, char b, char c, char d)
{
	ft_putchar(a + 48);
	ft_putchar(b + 48);
	ft_putchar(' ');
	ft_putchar(c + 48);
	ft_putchar(d + 48);
	if (!(a + 48 == '9' && b + 48 == '8' && c + 48 == '9' && d + 48 == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('\n');
	}
}

void	ft_print_comb2(void)
{
	char p1;
	char p2;
	char p3;
	char p4;

	p1 = 0;
	p2 = 0;
	p3 = 0;
	p4 = 1;
	while (!(p1 == 9 && p2 == 8))
	{
		print_digits(p1, p2, p3, p4);
		p4++;
		if (p4 == 10)
		{
			p3 = (p3 + 1);
			p4 = p2 + 1;
		}
		if (p3 == 10)
		{
			p3 = p1;
			p2++;
			if ((p2 = p2 % 10) == 0)
			{
				p1++;
			}
			if (p2 != 9)
			{
				p4 = p2 + 1;
			}
		}
	}
}

int main ()
{
	ft_print_comb2();
}
