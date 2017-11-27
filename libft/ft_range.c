/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 15:55:37 by ctrouill          #+#    #+#             */
/*   Updated: 2017/11/11 15:55:52 by ctrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_range(int min, int max)
{
	int *t;
	int i;

	if (min >= max)
		return (NULL);
	i = 0;
	t = malloc(sizeof(*t) * ((max - min) + 1));
	while (min + i < max)
	{
		t[i] = min + i;
		i++;
	}
	t[i] = 0;
	return (t);
}
