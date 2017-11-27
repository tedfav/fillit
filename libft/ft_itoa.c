/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 09:37:32 by ctrouill          #+#    #+#             */
/*   Updated: 2017/11/10 10:51:17 by ctrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbrlen(int n)
{
	size_t	i;

	i = 0;
	while (n <= -10 || n >= 10)
	{
		n /= 10;
		i++;
	}
	return ((n < 0) ? (i + 2) : (i + 1));
}

char			*ft_itoa(int n)
{
	size_t		nbrlen;
	size_t		i;
	char		*res;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	nbrlen = ft_nbrlen(n);
	i = nbrlen - 1;
	res = (char *)malloc(sizeof(char) * (nbrlen + 1));
	if (!res)
		return (NULL);
	while (n <= -10 || n >= 10)
	{
		res[i] = (n < 0) ? (-n % 10 + '0') : (n % 10 + '0');
		n /= 10;
		i--;
	}
	res[i--] = (n < 0) ? (-n + '0') : (n + '0');
	if (i == 0)
		res[i] = ('-');
	res[nbrlen] = '\0';
	return (res);
}
