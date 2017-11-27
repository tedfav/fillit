/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_debug_ok.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 16:29:51 by ctrouill          #+#    #+#             */
/*   Updated: 2017/11/11 16:48:49 by ctrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_debug_ok(const char *str)
{
	ft_putstr(KGRN);
	ft_putstr("[OK] ");
	ft_putstr(KST);
	ft_putendl(str);
}
