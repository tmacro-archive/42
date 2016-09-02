/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 09:28:48 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/11 18:27:34 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

char g_num = '0';

void	ft_print_numbers(void)
{
	if (g_num <= '9')
	{
		ft_putchar(g_num);
		g_num++;
		ft_print_numbers();
	}
}
