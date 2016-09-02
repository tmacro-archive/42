/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 18:47:14 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/21 20:54:47 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		check_position(int board[][9], int row, int col, int num)
{
	int row_start;
	int col_start;
	int i;

	i = 0;
	row_start = (row / 3) * 3;
	col_start = (col / 3) * 3;
	while (i < 9)
	{
		if (board[row][i] == num)
			return (0);
		if (board[i][col] == num)
			return (0);
		if (board[row_start + (1 % 3)][col_start + (i / 3)] == num)
			return (0);
		i++;
	}
	return (1);
}

int		solve_board(int board[][9], int row, int col)
{
	int i;

	i = 0;
	if (row < 9 && col < 9)
	{
		if (board[row][col] != 0)
			return (solve_board(board, incr_row(row, col), incr_col(row, col)));
		while (i < 10)
		{
			if (check_position(board, row, col, i))
			{
				board[row][col] = i;
				if (solve_board(board, incr_row(row, col), incr_col(row, col)))
					return (1);
				else
					board[row][col] = 0;
			}
			i++;
		}
		return (0);
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int board[9][9];

	if (argc == 10)
	{
		if (load_board(argv, board))
		{
			if (solve_board(board, 0, 0))
			{
				print_board(board);
				return (0);
			}
		}
	}
	print_error();
	return (0);
}
