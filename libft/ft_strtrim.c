/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:45:43 by ctrouill          #+#    #+#             */
/*   Updated: 2017/11/10 09:22:05 by ctrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_trimable(int c)
{
	return (c == ' '
			|| c == '\n'
			|| c == '\t'
			|| c == '\r'
			|| c == '\v'
			|| c == '\f');
}

char		*ft_strtrim(char const *s)
{
	size_t			i;
	size_t			len;
	char			*ret;

	if (s)
	{
		if (ft_strcmp((char*)s, "") == 0)
			return (ft_strdup(""));
		i = 0;
		while (ft_trimable(s[i]))
			i++;
		len = ft_strlen((char*)s) - 1;
		while (len > i && ft_trimable(s[len]))
			len--;
		ret = ft_strsub(s, i, len - (size_t)i + 1);
		return (ret);
	}
	return (NULL);
}
