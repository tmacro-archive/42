/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 13:45:44 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/23 20:31:06 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int adj_order(int x)
{
	if (x > 0)
		return (1);
	if (x < 0)
		return (-1);
	return (0);
}
int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int sortorder;
	int fixed;
	int tmp;

	i = 0;
	sortorder = 0;
	fixed = 0;
	while (i < length - 1)
	{
		tmp = adj_order((*f)(tab[i], tab[i + 1]));
		if (tmp != sortorder && !fixed)
		{
			sortorder = tmp;
			i = 0;
			fixed = 1;
		}
		if (tmp != sortorder && fixed && tmp != 0)
			return (0);
			i++;
	}
	return (1);
}
