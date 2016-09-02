/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 21:38:11 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/23 22:42:57 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		calc_len(char **tab)
{
	int len;

	len = 0;
	while (tab[len])
		len++;
	return (len);
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char*))
{
	int		sort_pos;
	int		cur_pos;
	int		min_pos;
	char	*temp;

	sort_pos = 0;
	while (sort_pos < calc_len(tab))
	{
		cur_pos = sort_pos;
		min_pos = sort_pos;
		while (cur_pos < calc_len(tab))
		{
			if ((*cmp)(tab[cur_pos], tab[min_pos]) < 0)
				min_pos = cur_pos;
			cur_pos++;
		}
		if (min_pos != sort_pos)
		{
			temp = tab[sort_pos];
			tab[sort_pos] = tab[min_pos];
			tab[min_pos] = temp;
		}
		sort_pos++;
	}
}
