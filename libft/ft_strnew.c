/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 11:29:20 by ctrouill          #+#    #+#             */
/*   Updated: 2017/11/09 11:48:32 by ctrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*mafraicheur;

	if (!(mafraicheur = (char*)ft_memalloc(sizeof(char) * size + 1)))
		return (NULL);
	mafraicheur[size + 1] = '\0';
	return (mafraicheur);
}
