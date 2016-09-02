/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgaudet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 18:43:23 by fgaudet           #+#    #+#             */
/*   Updated: 2016/08/23 00:45:06 by fgaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// Work to exercise 01 - 02 - 03 - 04 - 05
// if you see any mistake Im happy to change my file. This is made quickly 
// for testing.
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

// Write your own text. Choose the voice.
#define PASSED system("echo \"Passed! =)\" && Say -v Good Congratulations you passed the exercise! Happy Face.");
#define FAIL system("echo \"Fail! =(\" && Say -v Bad Sorry you failed the exercise! Sad Panda.");
 
//Exercise FUNCTION ===================================
//EX01
void	ft_foreach(int *tab, int length, void (*f)(int));
//EX02
int		*ft_map(int *tab, int length, int (*f)(int));
//Ex03
int		ft_any(char **tab, int (*f)(char*));
//EX04
int		ft_count_if(char **tab, int (*f)(char*));
//EX05
int		ft_is_sort(int *tab, int length, int (*f)(int, int));

// Importante note
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnbr(int nb)
{
	if (nb > 2147483647 || nb < -2147483648)
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

//Function to test ===============================
//EX02
int 	ft_add_hundred(int nb)
{
	nb += 100;
	return (nb);
}
//EX03 - EX04
int 	ft_check_char(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		if (str[i] == 'c')
			return (1);
	return (0);
}

int		ft_check_char2(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		if (str[i] == 'c')
			return (5);
	return (0);
}

//EX05
int		ft_check_sort(int a, int b)
{
	if (a < b)
		return (-5);
	else if (a == b)
		return (0);
	return (5);
}

int		main(void)
{
	int ex = 0;
	while (ex != -1)
	{
		printf("\n == Please select an exercise (-1 exit) ==:\t");
		scanf("%d", &ex);
		printf("\n === You selected EX |%2d| ===\n\n", ex);
		
		//Ex01 need
		if (ex == 1)
		{
			int		tab[1337];
			int		i;

			i = -1;
			while (++i < 1337)
				tab[i] = i + 10;
			ft_foreach(tab, 1337, &ft_putnbr);
			printf("The last number should be 1346\n");
			
		}
		//Ex02
		else if (ex == 2)
		{
			int		tab[1337];
			int		*tab2;
			int		i;

			i = -1;
			while (++i < 1337)
				tab[i] = i + 10;

			tab2 = ft_map(tab, 1337, &ft_add_hundred);	
			printf("Last number is 1446 : %d\n",tab2[1336]);

			if (tab2[1336] && tab2[1336] == 1446 )
				PASSED	
			else
				FAIL


		}
		//Ex03
		else if (ex == 3)
		{
			char	*str[4] = {"test", "test2", "test3", 0};
			char	*str1[4] = {"tcest", "test2", "test3", 0};

			int 	count1;
			int		count2;
			int		count3;

				
			count1 = ft_any(str, &ft_check_char);
			count2 = ft_any(str1, &ft_check_char2);
			count3 = ft_any(str1, &ft_check_char);

			printf("Test with 0 return :\t|%d|\n", count1);
			printf("Test with 0 return :\t|%d|\n", count2);
			printf("Test with 1 return :\t|%d|\n", count3);

			if (count1 == 0 && count2 == 0 && count3 == 1 )
				PASSED
			else
				FAIL
		}
		//Ex04
		else if (ex == 4)
		{
			char	*str3[6] = { "test", "testc2", "tecst3", "test4", "testc5", 0 };
			char	*str4[4] = { "tcest", "test2", "test3", 0};
			int		count1;
			int		count2;
			int		count3;

			count1 = ft_count_if(str3, &ft_check_char);
			count2 = ft_count_if(str4, &ft_check_char);
			count3 = ft_count_if(str3, &ft_check_char2);

			printf("Test with 3 return :\t|%d|\n", count1);
			printf("Test with 1 return :\t|%d|\n", count2);
			printf("Test with 0 return :\t|%d|\n", count3);
			if (count1 == 3 && count2 == 1 && count3 == 0)
				PASSED
			else
				FAIL
		}
		//Ex05
		else if (ex == 5)
		{
			int		nb[9][6] = {{ 6, 5, 4, 3, 2, 1 }, //Good 00
								{3, 2, 2, 1, 1, 0},  //Good 01
								{1, 2, 3, 4, 5, 6},  //Good 02
								{1, 2, 3, 3, 4, 4},  //Good 03
								{1, 1, 1, 1, 1, 1},  //Good 04
								{1, 1, 2, 3, 4, 5},  //Good 05 
								{2, 2, 1, 1, 1, 1},  //Good 06
								{1, 2, 3, 5, 4, 6},  //Bad 	07
								{6, 5, 3, 4, 2, 1}};  //Bad 	08

			int		nb1[1] = {1};
			int		count[10] = {0};
			int 	i = -1;
			int 	j = -1;
			count[9] = ft_is_sort(nb1, 1, &ft_check_sort);
			while (++i < 9)
			{
				count[i] = ft_is_sort(nb[i], 6, &ft_check_sort);
				j = 0;
				printf("Test |");
				while (++j < 6)
					printf("%d|", nb[i][j]);
				printf(" :\t|%d|\n", count[i]);
			}
			printf("Test |1| :\t|%d|\n", count[9]);
			if (count[0] == 1 && count[1] == 1 && count[2] == 1 && count[3] == 1 && 
					count[4] == 1 && count[5] == 1 && count[6] == 1 && count[7] == 0 && 
					count[8] == 0 && count[9] == 1)
				PASSED
			else
				FAIL
		}
		else if (ex == -1)
			printf("Exiting!\n");
		else
			system("echo \"Exercise does not exist you fool!\" && say Exercise does not exist you fool!\n");
	}
}

