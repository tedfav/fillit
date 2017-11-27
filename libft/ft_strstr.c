/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 07:57:45 by ctrouill          #+#    #+#             */
/*   Updated: 2017/11/09 08:09:20 by ctrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;
	size_t	tmp;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		tmp = i;
		while (haystack[i] == needle[j])
		{
			i++;
			j++;
			if (!needle[j])
				return ((char *)&haystack[tmp]);
		}
		i = tmp;
		i++;
	}
	return (NULL);
}
