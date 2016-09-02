/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 16:22:50 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/21 20:33:40 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush.h"
#include <stdio.h>

int		load_row(char **argv, int row, int board[][9])
{
	int col;
	int clues;

	col = 0;
	clues = 0;
	while (col < 9)
	{
		if (argv[row][col] >= '0' && argv[row][col] <= '9')
		{
			clues++;
			board[row - 1][col] = argv[row][col] - 48;
		}
		else if (argv[row][col] == '.')
			board[row - 1][col] = 0;
		else
			return (-1);
		col++;
	}
	return (clues);
}

int		load_board(char **argv, int board[][9])
{
	int row;
	int clues;
	int tmp;

	row = 1;
	clues = 0;
	while (row < 10)
	{
		if (!(ft_strlen(argv[row]) == 9))
			return (0);
		tmp = load_row(argv, row, board);
		if (tmp == -1)
			return (0);
		clues += tmp;
		row++;
	}
	if (clues >= 17)
		return (1);
	return (0);
}

void	print_board(int board[][9])
{
	int r;
	int c;

	r = 0;
	while (r < 9)
	{
		c = 0;
		while (c < 9)
		{
			ft_putchar(board[r][c] + 48);
			if (c != 8)
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}
