#include <stdio.h>

void ft_takes_place(int hour);

int main()
{
	int hr;

	hr = 0;
	while (hr < 2300)
	{
		printf("%i\n", hr);
		ft_takes_place(hr);
		hr += 100;
	}
}
