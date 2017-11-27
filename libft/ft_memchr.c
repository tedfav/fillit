/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 12:12:22 by ctrouill          #+#    #+#             */
/*   Updated: 2017/11/11 10:44:01 by ctrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	pp;
	size_t			i;

	i = 0;
	pp = (unsigned char)c;
	p = (unsigned char *)str;
	while (n--)
	{
		if (p[i] == pp)
			return (&p[i]);
		i++;
	}
	return (NULL);
}
