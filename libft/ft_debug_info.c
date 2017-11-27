/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_debug_info.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 16:29:51 by ctrouill          #+#    #+#             */
/*   Updated: 2017/11/11 16:46:05 by ctrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_debug_info(const char *str)
{
	ft_putstr(KYEL);
	ft_putstr("[INFO] ");
	ft_putstr(KST);
	ft_putendl(str);
}
