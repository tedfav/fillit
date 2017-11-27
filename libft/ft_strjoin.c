/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:59:36 by ctrouill          #+#    #+#             */
/*   Updated: 2017/11/09 14:44:50 by ctrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *ret;

	ret = NULL;
	if (s1 && s2)
	{
		if (!(ret = ft_strnew(ft_strlen((char*)s1) + ft_strlen((char*)s2))))
			return (NULL);
		ft_memcpy(ret, s1, ft_strlen((char*)s1));
		ft_strcat(ret, s2);
	}
	else if (s1)
		return (ft_strdup(s1));
	else if (s2)
		return (ft_strdup(s2));
	return (ret);
}
