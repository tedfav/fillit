/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 09:05:03 by ctrouill          #+#    #+#             */
/*   Updated: 2017/11/17 13:28:51 by ctrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

void	error(const char *str)
{
	if (str)
	{
		ft_putendl(str);
	}
	exit(1);
}