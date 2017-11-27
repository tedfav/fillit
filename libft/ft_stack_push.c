/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 09:23:44 by ctrouill          #+#    #+#             */
/*   Updated: 2017/11/12 09:35:30 by ctrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_stack_push(t_stack *s, size_t d)
{
	if (s && d)
	{
		if (s->size < STACK_LIMIT)
			s->data[s->size++] = d;
		else
			ft_debug_fatal("Error: stack full");
	}
}
