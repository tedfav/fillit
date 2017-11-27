/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 11:34:06 by ctrouill          #+#    #+#             */
/*   Updated: 2017/11/10 18:10:32 by ctrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** memmove -- copy byte string
*/

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char		*dest;
	const char	*src;

	dest = (char *)s1;
	src = (const char *)s2;
	if (s2 >= s1)
		s1 = ft_memcpy(s1, s2, n);
	else
	{
		dest += n;
		src += n;
		while (n--)
			*--dest = *--src;
	}
	return (s1);
}
