/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_debuga_ok.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 16:29:51 by ctrouill          #+#    #+#             */
/*   Updated: 2017/11/11 16:47:23 by ctrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_debug_warn(const char *str)
{
	ft_putstr(KMAG);
	ft_putstr("[WARNING] ");
	ft_putstr(KST);
	ft_putendl(str);
}
