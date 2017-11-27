/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_top.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 09:23:23 by ctrouill          #+#    #+#             */
/*   Updated: 2017/11/12 09:36:09 by ctrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_stack_top(t_stack *s)
{
	if (s)
	{
		if (s->size == 0)
		{
			ft_debug_fatal("Error: stack empty");
			return (-1);
		}
		return (s->data[s->size - 1]);
	}
	return (0);
}
