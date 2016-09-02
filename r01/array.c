/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 18:53:08 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/21 19:56:31 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		incr_row(int row, int col)
{
	if (col == 8)
		return (row + 1);
	return (row);
}

int		incr_col(int row, int col)
{
	row = row - 0;
	if (col == 8)
		return (0);
	return (col + 1);
}
