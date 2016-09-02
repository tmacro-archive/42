/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 14:13:24 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/12 23:21:45 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int sort_pos;
	int cur_min;
	int cur_pos;
	int min_pos;
	int temp;

	sort_pos = 0;
	while (sort_pos < size)
	{
		cur_pos = sort_pos;
		while (cur_pos < size)
		{
			if (tab[cur_pos] < cur_min)
			{
				cur_min = tab[cur_pos];
				min_pos = cur_pos;
			}
			cur_pos++;
		}
		temp = tab[sort_pos];
		tab[sort_pos] = tab[min_pos];
		tab[min_pos] = temp;
		sort_pos++;
	}
}
