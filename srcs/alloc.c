/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 16:32:37 by ctrouill          #+#    #+#             */
/*   Updated: 2017/11/27 16:51:43 by tfavart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**alloc_tmp(size_t x, size_t y)
{
	char	**ret;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!(ret = (char**)malloc(sizeof(char*) * y)))
		return (NULL);
	while (i < y)
	{
		ret[i] = ft_strnew(x);
		ft_bzero(ret[i], x);
		i++;
	}
	ret[i] = NULL;
	return (ret);
}
