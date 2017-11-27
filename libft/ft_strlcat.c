/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:28:50 by ctrouill          #+#    #+#             */
/*   Updated: 2017/11/13 14:29:12 by ctrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int i;
	unsigned int dsiz;
	unsigned int ssiz;

	if (size == 0)
		return (ft_strlen(dest));
	i = 0;
	while (dest[i] != '\0')
		i++;
	dsiz = i;
	i = 0;
	while (src[i] != '\0')
		i++;
	ssiz = i;
	i = 0;
	while (src[i] != '\0' && (dsiz + i) < (size - 1))
	{
		dest[dsiz + i] = src[i];
		i++;
	}
	dest[dsiz + i] = '\0';
	return (ssiz + ((dsiz < size) ? dsiz : size));
}
