/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfavart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 13:18:36 by tfavart           #+#    #+#             */
/*   Updated: 2017/11/27 16:55:18 by tfavart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void			ft_back(t_tetri *data, char **tab, int len, int coord)
{
	int				ind;
	int				x;
	int				y;

	x = coord / len;
	y = coord % len;
	ind = 0;
	while (ind < 4)
	{
		tab[y + data[ind].y][x + data[ind].x] = '.';
		ind++;
	}
}

static int			ft_data(t_lst *list, char **tab, int len, int coord)
{
	int				ind;
	int				x;
	int				y;

	y = coord % len;
	x = coord / len;
	ind = 0;
	while (ind < 4)
	{
		if ((y + list->data[ind].y) < len && (x + list->data[ind].x) < len &&
				tab[y + list->data[ind].y][x + list->data[ind].x] == '.')
			ind++;
		else
			return (0);
	}
	ind = 0;
	while (ind < 4)
	{
		tab[y + list->data[ind].y][x + list->data[ind].x] = 'A' + list->i;
		ind++;
	}
	return (1);
}

/*
** fonction de resolution par backtraking sur laquel
** je me casse grave la tete!!!!!!!!!
*/

static int			ft_reso(t_lst *list, char **tab, int len)
{
	int				x;
	int				y;

	if (!list)
		return (1);
	y = -1;
	while (++y < len)
	{
		x = 0;
		while (x < len)
		{
			if (tab[y][x] == '.')
			{
				if (ft_data(list, tab, len, x * len + y))
				{
					if (ft_reso(list->next, tab, len))
						return (1);
					else
						ft_back(list->data, tab, len, x * len + y);
				}
			}
			x++;
		}
	}
	return (0);
}

/*
** allocation du tableau fonction de len et
** de l'ingremantation de i dans ft_solve
*/

static char			**ft_alloc_tab(int len, int i, int x)
{
	char			**colonnes;
	char			*lignes;
	int				test;

	if (!(colonnes = (char**)malloc(sizeof(char*) * (len + i + 1))))
		return (NULL);
	while (x < len + i)
	{
		test = 0;
		if (!(lignes = (char*)malloc(sizeof(char) * (len + i + 1))))
		{
			ft_free_tab(colonnes);
			return (NULL);
		}
		while (test < len + i)
		{
			lignes[test] = '.';
			test++;
		}
		lignes[test] = '\0';
		colonnes[x] = lignes;
		x++;
	}
	colonnes[x] = 0;
	return (colonnes);
}

/*
** ft_solve demande la creation du tableau de
** resolution en partant du plus petit et en
** s'agrandissant si la solution n'a pas etait trouve
*/

void				ft_solve(t_lst *list, int len)
{
	char			**tab;
	int				i;

	i = 0;
	len = ft_sqrt(len * 4);
	if (!(tab = ft_alloc_tab(len, i, 0)))
		return ;
	while (ft_reso(list, tab, len + i) == 0 && i < len)
	{
		ft_free_tab(tab);
		if (!(tab = ft_alloc_tab(len, i += 1, 0)))
			return ;
	}
	ft_affiche(tab);
	ft_free_tab(tab);
}
