/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:31:14 by ctrouill          #+#    #+#             */
/*   Updated: 2017/11/09 15:20:43 by ctrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	size_t	i;

	i = -1;
	ret = NULL;
	if (s && f)
	{
		if (!(ret = (char*)malloc(sizeof(char) * ft_strlen((char*)s) + 1)))
			return (NULL);
		while (s[++i] != '\0')
			ret[i] = f(i, s[i]);
		ret[i] = '\0';
	}
	return (ret);
}
