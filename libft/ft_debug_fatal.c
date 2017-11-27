/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_debug_fatal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 16:29:51 by ctrouill          #+#    #+#             */
/*   Updated: 2017/11/11 16:46:19 by ctrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_debug_fatal(const char *str)
{
	ft_putstr(KRED);
	ft_putstr("[FATAL] ");
	ft_putstr(KST);
	ft_putendl(str);
}
