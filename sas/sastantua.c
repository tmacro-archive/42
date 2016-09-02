/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 19:21:19 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/14 23:39:22 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		calc_width(int level)
{
	int width;

	width = 0;
	while (level > 0)
	{
		if (level % 2 == 0)
			width += (level - 1) / 2;
		width += 6 + ((level + 1) * 2);
		level--;
	}
	return (width);
}

void	print_padding(int length)
{
	while (length > 0)
	{
		ft_putchar(' ');
		length--;
	}
}

void	print_line(int padding, int width, int door_size, int handle)
{
	int counter;

	counter = 0;
	print_padding(padding);
	width -= 2;
	if (door_size)
		width -= door_size;
	ft_putchar('/');
	while (counter < width)
	{
		if (door_size && counter == width / 2)
			while (door_size > 0)
			{
				if (handle && door_size == 2)
					ft_putchar('$');
				else
					ft_putchar('|');
				door_size--;
			}
		ft_putchar('*');
		counter++;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

int		print_block(int height, int width, int total_width, int door)
{
	int door_size;
	int counter;
	int handle;

	counter = height;
	door_size = 0;
	while (counter > 0)
	{
		width += 2;
		if (door && height % 2 == 0 && counter == height - 3)
			door_size = height - 3;
		else if (door && height % 2 == 1 && counter == height - 2)
			door_size = height - 2;
		if (door && counter == (height) / 2 && door_size > 3)
			handle = 1;
		else
			handle = 0;
		print_line((total_width - width) / 2, width, door_size, handle);
		counter--;
	}
	return (width);
}

void	sastantua(int size)
{
	int total_width;
	int counter1;
	int width;
	int step_offset;
	int door;

	counter1 = 0;
	width = 1;
	step_offset = 2;
	total_width = calc_width(size);
	while (counter1 < size)
	{
		if (counter1 == size - 1)
			door = 1;
		width = print_block(counter1 + 3, width, total_width, door);
		if (counter1 % 2 == 0)
			step_offset += 2;
		width += step_offset;
		counter1++;
	}
}
