/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgaudet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 18:43:23 by fgaudet           #+#    #+#             */
/*   Updated: 2016/08/26 06:00:58 by fgaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// Work to exercise 01 - 02 - 03 - 04 - 05
// if you see any mistake Im happy to change my file. This is made quickly 
// for testing. THIS IS JUST FOR TESTING PURPOSE. thoses are my test case
// its possible I miss some not RESPONSIBLE for MOULINETTE interpretation.
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_btree.h"

// Write your own text.
#define PASSED system("echo \"Passed! =)\" && Say you passed.");
#define FAIL system("echo \"Fail! =(\" && Say Sorry failed!");
 
//Exercise FUNCTION =================================== EXERCISES PROTOTYPE
//EX00
//EX01

//EX12



//Function to test ====================================== PERSONAL FUNCTION FOR TESTINGdd

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
//EX01
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

void	ft_putstr(void *str)
{
	char *strtmp;

	strtmp = (char *)(str);
	printf("%s\n", strtmp);
}

// ft_strcmp
int		ft_strcmp(void *sv1, void *sv2)
{
	int		i;
	char	*s1;
	char	*s2;

	s1 = (char *)(sv1);
	s2 = (char *)(sv2);
	i = 0;
	if (!s1[0])
		return (0 - s2[0]);
	while (s1[i++])
		if (s1[i - 1] != s2[i - 1])
			return (s1[i - 1] - s2[i - 1]);
	return (0);
}
//===================================================== END OF PERSONAL FUNCTION

int		main(void)
{
	int ex = 0;
	char string[200];
	while (ex != -1)
	{
		printf("\n == Please select an exercise (-1 exit) ==:\t");
		scanf("%s", string);
		ex = atoi(string);
		printf("\n === You selected EX |%2d| ===\n\n", ex);

		
		//=================================================================  Ex01 
		if (ex == 0)
		{
			printf("Have to push something into the tree\n");
			
			t_btree		*btree;
			char *str = {"test bobby"};


			printf("Str send to btree |%s|\n",str);
			btree = btree_create_node(str);
			printf("Str in your btree |%s|\n",btree->item);

			if (!(ft_strcmp(str,(char *)btree->item)))
				PASSED
			else
				FAIL
		}
		//=================================================================  Ex01 
		if (ex == 4)
		{
			printf("Have to add thing into tree\n");
			
			t_btree		*btree4;
			char *str4[] = {"6",	
							"3",
							"4",
							"5",
							"1",
							"2",
							"8",
							"9",
							"7"};
			int		i;

			i = -1;
			
			while (str4[++i])
				btree_insert_data(&btree4, str4[i], &ft_strcmp);
			printf("Doing prefix \n");
			btree_apply_prefix(btree4, &ft_putstr);
			printf("Doing infix \n");
			btree_apply_infix(btree4, &ft_putstr);
			printf("Doing suffix \n");
			btree_apply_suffix(btree4, &ft_putstr);
			
			char	*str11 = "5";
			char	*found = btree_search_item(btree4, str11, &ft_strcmp);
			printf("I found %s\n", found);

			int		count12 = btree_level_count(btree4);
			printf("Count = |%d|\n", count12);


		/*	if (!(ft_strcmp(str,(char *)btree->item)))
				PASSED
			else
				FAIL*/
		}
		else if (ex == -1)
			printf("Exiting!\n");
		else
			system("echo \"Exercise does not exist you fool!\" && say Exercise does not exist you fool!\n");
	}
}
