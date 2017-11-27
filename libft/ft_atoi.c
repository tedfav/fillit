/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 09:15:37 by ctrouill          #+#    #+#             */
/*   Updated: 2017/11/11 11:06:56 by ctrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_atoi(const char *str)
{
	size_t	i;
	size_t	n;
	int		res;

	i = 0;
	n = 1;
	res = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == 45)
		n = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += (int)str[i] - 48;
		i++;
	}
	return (res * n);
}
