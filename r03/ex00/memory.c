/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 14:51:03 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/27 15:06:56 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/* allocates size + 1 char buffer, returns NULL on failure */
char *allocate_buffer(int size)
{
	char *ret;

	ret = (char*)malloc(sizeof(char) * (size + 1));
	return (ret);
}

