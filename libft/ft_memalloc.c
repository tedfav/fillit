/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 10:59:36 by ctrouill          #+#    #+#             */
/*   Updated: 2017/11/09 11:15:56 by ctrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*fraicheur;

	if (!(fraicheur = malloc(size)))
		return (NULL);
	ft_bzero(fraicheur, size);
	return (fraicheur);
}
