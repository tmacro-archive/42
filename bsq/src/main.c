/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/30 12:58:29 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/31 23:20:55 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "solve.h"

int		main(int argc, char **argv)
{
	char	**map;
	int		***ob_set;
	int		*result;

	if (argc == 1)
	{
		map = load_map(NULL, 0);
		ob_set = create_obstacle_set(map);
		result = solve_map(ob_set, 0, 0);
		print_solution(map, result[0], result[1], result[2]);
	}
	if (argc > 1)
	{
		argv++;
		while (argc > 1)
		{
			map = load_map(*argv, 0);
			ob_set = create_obstacle_set(map);
			result = solve_map(ob_set, 0, 0);
			print_solution(map, result[0], result[1], result[2]);
			argc--;
			argv++;
		}
	}
}
