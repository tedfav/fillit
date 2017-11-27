/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:41:03 by ctrouill          #+#    #+#             */
/*   Updated: 2017/11/11 14:55:51 by ctrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ret;

	if (!s)
		return (NULL);
	if ((start == 0 && len == 0))
		return (ft_strdup(""));
	if (!(ret = ft_strnew(len)))
		return (NULL);
	ret = ft_strncpy(ret, &s[start], len);
	ret[len] = '\0';
	return (ret);
}
