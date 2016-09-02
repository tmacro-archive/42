/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 21:38:11 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/23 22:39:49 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int sign;

	sign = 0;
	if (!*s1)
		return (-*s2);
	while (*s1)
	{
		if (*s1 != *s2++)
			return (*(const unsigned char*)s1 - *(const unsigned char*)--s2);
		else if (*s1++ == '0')
			return (0);
	}
	return (0);
}

int		calc_len(char **tab)
{
	int len;

	len = 0;
	while (tab[len])
		len++;
	return (len);
}

void	ft_sort_wordtab(char **tab)
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
			if (ft_strcmp(tab[cur_pos], tab[min_pos]) < 0)
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
