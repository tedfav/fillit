/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_merge.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 15:58:16 by ctrouill          #+#    #+#             */
/*   Updated: 2017/11/11 15:59:23 by ctrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *list;

	if (*begin_list1)
	{
		list = *begin_list1;
		while (list->next)
		{
			list = list->next;
		}
		list->next = begin_list2;
	}
	else
		*begin_list1 = begin_list2;
}
