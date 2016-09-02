/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 14:13:24 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/17 23:39:30 by tmckinno         ###   ########.fr       */
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

void	sort_args(int size, char **args)
{
	int		sort_pos;
	int		cur_pos;
	int		min_pos;
	char	*temp;

	sort_pos = 0;
	while (sort_pos < size)
	{
		cur_pos = sort_pos;
		min_pos = sort_pos;
		while (cur_pos < size)
		{
			if (ft_strcmp(args[cur_pos], args[min_pos]) < 0)
				min_pos = cur_pos;
			cur_pos++;
		}
		if (min_pos != sort_pos)
		{
			temp = args[sort_pos];
			args[sort_pos] = args[min_pos];
			args[min_pos] = temp;
		}
		sort_pos++;
	}
}

int		ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int j;

	j = 0;
	if (argc <= 1)
		return (0);
	sort_args(argc, argv++);
	while (j < argc - 1)
	{
		i = 0;
		while (argv[j][i])
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
