/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:23:33 by ctrouill          #+#    #+#             */
/*   Updated: 2017/11/11 10:03:51 by ctrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** memccpy -- copy string until character found
*/

void		*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t					i;
	unsigned char			*cd;
	unsigned char			cc;
	const unsigned char		*cs;

	i = 0;
	cd = (unsigned char *)s1;
	cc = (unsigned char)c;
	cs = (const unsigned char *)s2;
	while (i < n)
	{
		cd[i] = cs[i];
		if (cd[i] == cc)
			return (((char*)s1 + i + 1));
		i++;
	}
	return (NULL);
}
