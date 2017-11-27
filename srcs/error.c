/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 09:05:03 by ctrouill          #+#    #+#             */
/*   Updated: 2017/11/27 16:56:00 by tfavart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*
** Show error to stdout and abort
** program with 1 error code
*/

void	error(const char *str)
{
	if (str)
	{
		ft_putendl(str);
	}
	exit(1);
}

/*
** Check for incorrect end charactet
*/

int		ft_istrailling(const char *str, size_t len)
{
	if ((str[len - 1] == '\n') && (str[len - 2] == '\n'))
		return (0);
	if ((str[len - 1] != '\n'))
		return (0);
	return (1);
}

/*
** Pretty print the result of the
** tab pass in parameter
*/

void	ft_affiche(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
}
