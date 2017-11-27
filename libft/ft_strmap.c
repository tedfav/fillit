/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:11:40 by ctrouill          #+#    #+#             */
/*   Updated: 2017/11/09 13:25:00 by ctrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ret;
	size_t	i;

	i = -1;
	ret = NULL;
	if (s)
	{
		if (!(ret = (char*)malloc(sizeof(char) * ft_strlen((char*)s) + 1)))
			return (NULL);
		while (s[++i] != '\0')
			ret[i] = f(s[i]);
		ret[i] = '\0';
	}
	return (ret);
}
