/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:10:32 by ctrouill          #+#    #+#             */
/*   Updated: 2017/11/08 17:01:53 by ctrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	oc;
	size_t			i;

	i = -1;
	oc = (unsigned char)c;
	while (str[++i] != oc && str[i] != '\0')
		;
	if (str[i] == oc)
		return ((char *)&str[i]);
	return (NULL);
}
