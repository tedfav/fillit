/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 15:33:41 by ctrouill          #+#    #+#             */
/*   Updated: 2017/11/10 15:43:35 by ctrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *r;

	i = 0;
	if ((r = (int *)malloc(sizeof(int) * length)) == NULL)
		return (NULL);
	while (i < length)
	{
		r[i] = f(tab[i]);
		i++;
	}
	return (r);
}
