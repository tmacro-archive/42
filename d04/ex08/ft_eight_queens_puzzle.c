/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 21:42:12 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/13 23:06:29 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_directions[4][2] = {{-1, -1}, {1, 1}, {-1, 1}, {1, -1}};

int ft_putchar(char c);

int check_row(int row, int *board[8][8])
{
	int col;
	
	col = 0;
	while (col < 8)
	{
		if (board[col][row])
			return (0);
		col++;
	}
	return (1);
}

int check_column(int col, int *board[8][8])
{
	int row;

	row = 0;
	while (row < 8)
	{
		if(board[col][row])
			return (0);
		row++;
	}
	return (1);
}

int walk_diag(int x, int y, int dir[2], int *board[8][8])
{
	while (x >= 0 && x < 8 && y >= 0 && y < 8)
	{
		if (board[x][y])
			return (0);
		x += dir[0];
		y += dir[1];
	}
	return (1);
}

int check_diag(int origin_x, int origin_y, int *board[8][8])
{
	int dir;
	int passed;

	passed = 1;
		dir = 0;
	while (dir < 4)
	{
		if (!walk_diag(origin_x, origin_y, g_directions[dir], board))
			passed = 0;
		dir--;
	}
	return (passed);
}

int check_placement(int x, int y, int *board[8][8])
{
	int passed;

	passed = 1;
	if (!check_column(x, board))
		passed = 0;
	if (!check_row(y, board))
		passed = 0;
	if (!check_diag(x, y, board))
		passed = 0;
	return (passed);
}

void place_queens(int col, int *board[8][8])
{
	int row;

	row = 0;
	while (row < 8)
	{
		if (check_placement(col, row, board))
		{
			*board[col][row] = 1;
			return (place_queens(col++, board));
		}
		row++;
	}
}

/* int *new_board(void) */
/* { */
	/* int rows; */
	/* int columns; */
	/* int board[8][8]; */

	/* rows = 0; */
	/* columns = 0; */
	/* while (columns < 8) */
	/* { */
		/* while (rows < 8) */
		/* { */
			/* board[columns][rows] = 0; */
			/* rows++; */
		/* } */
		/* columns++; */
	/* } */
	/* return ((int*)board); */

void print_board(int board[8][8])
{
	int col;
	int row;

	col = 0;
	row = 0;
	while (col < 8)
	{
		while (row < 8)
		{
			if (board[row][col])
			{
				ft_putchar(row+48);
					break ;
			}
			row++;
		}
		col++;
	}
}

int ft_eight_queens_puzzle(void)
{
	int cols;

	cols = 0;
	int rows;
	int columns;
	int board[8][8];

	rows = 0;
	columns = 0;
	while (columns < 8)
	{
		while (rows < 8)
		{
			board[columns][rows] = 0;
			rows++;
		}
		columns++;
	}

	while (cols < 8)
	{
		place_queens(cols, &board);
		print_board(board);
		col++;
	}
}
