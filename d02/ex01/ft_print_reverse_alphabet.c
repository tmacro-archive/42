/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 09:28:48 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/11 18:24:59 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

char g_letter = '{';

void	ft_print_reverse_alphabet(void)
{
	g_letter--;
	if (g_letter >= 'a')
	{
		ft_putchar(g_letter);
		ft_print_reverse_alphabet();
	}
}
