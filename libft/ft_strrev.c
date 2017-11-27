/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 10:05:03 by ctrouill          #+#    #+#             */
/*   Updated: 2017/11/10 10:06:32 by ctrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		l;
	char	ret;

	i = 0;
	l = ft_strlen(str);
	while (l - 1 > i)
	{
		ret = str[i];
		str[i] = str[l - 1];
		str[l - 1] = ret;
		l--;
		i++;
	}
	return (str);
}
