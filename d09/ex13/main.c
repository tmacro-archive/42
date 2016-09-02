#include <stdio.h>


int	ft_compact(char **tab, int length);


int main(int argc, char **argv)
{
	int len;


	len= ft_compact(argv, argc);
	argv[1] = 0;
	printf("%i\n", len);
}
