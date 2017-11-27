/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 08:21:54 by ctrouill          #+#    #+#             */
/*   Updated: 2017/11/11 09:48:50 by ctrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** memset -- fill a byte string with a byte value
*/

void		*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*str;

	str = (char*)b;
	if (len == 0)
		return (str);
	i = 0;
	while (i < len)
	{
		str[i] = (char)c;
		i++;
	}
	return (str);
}
