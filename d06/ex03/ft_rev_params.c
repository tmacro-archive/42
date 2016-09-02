/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 11:24:44 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/17 13:29:11 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		t_putchar(char c);

int		main(int argc, char **argv)
{
	int i;

	argc--;
	while (argc > 0)
	{
		i = 0;
		while (argv[argc][i] != '\0')
		{
			ft_putchar(argv[argc][i]);
			i++;
		}
		ft_putchar('\n');
		argc--;
	}
}
