void	ft_putchar(char c);

void	rush3(int x, int y)
{
	int		i = 1;
	int		j = 1;

	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if ((j == 1 || j == y) && i == 1)
				ft_putchar('A');
			if ((j == 1 || j == y) && i == x && x != 1)
				ft_putchar('C');
			if (((j == 1 || j == y) && (i > 1 && i < x))
				|| ((j > 1 && j < y) && (i == 1 || i == x)))
				ft_putchar('B');
			if (((j > 1 && j < y) && (i > 1 && i < x)))
				ft_putchar(' ');
		i++;
		}
	j++;
	ft_putchar('\n');
	}
}