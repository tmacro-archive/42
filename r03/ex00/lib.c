#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0' && s1[index] == s2[index])
		index++;
	return (s1[index] - s2[index]);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
}

void	ft_putnbr(int nb)
{
	if (nb < -2147483647 || nb > 2147483647)
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}


void	ft_putresult(char *colle, int x, int y)
{
	ft_putstr(colle);
	ft_putstr(" [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putchar(']');
}