/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 08:32:14 by ctrouill          #+#    #+#             */
/*   Updated: 2017/11/09 08:51:00 by ctrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	tmp;

	i = 0;
	if (s2[i] == '\0')
		return ((char *)s1);
	while (s1[i] && i < n)
	{
		j = 0;
		tmp = i;
		while (s1[i] == s2[j] && i < n)
		{
			i++;
			j++;
			if (!s2[j])
				return ((char *)&s1[tmp]);
		}
		i = tmp;
		i++;
	}
	return (NULL);
}
