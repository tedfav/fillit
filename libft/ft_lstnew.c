/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 11:02:37 by ctrouill          #+#    #+#             */
/*   Updated: 2017/11/11 15:33:52 by ctrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*retour;

	if (!(retour = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!content || !content_size)
	{
		retour->content = NULL;
		retour->content_size = 0;
	}
	else
	{
		retour->content = ft_memalloc(content_size);
		ft_memcpy(retour->content, content, content_size);
		retour->content_size = content_size;
	}
	retour->next = NULL;
	return (retour);
}
