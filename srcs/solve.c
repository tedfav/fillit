/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfavart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 13:18:36 by tfavart           #+#    #+#             */
/*   Updated: 2017/11/21 16:55:35 by tfavart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_reso(t_lst *list, char **tab, int len, int i)
{
	int			x;
	int			y;
	int			ind;

	y = 0;
	ind = 0;
	if (list)
	{
		while (y < len)
		{
			x = 0;
			while (x < len)
			{
				while (tab[y][x] == '.' && (y + list->data[ind].y) < len && 
						(x + list->data[ind].x) < len)
				{
					tab[y + list->data[ind].y][x + list->data[ind].x] = 'A' + i;
					ind++;
					ft_reso(list = list->next, tab, len ,i++);
				}
				x++;
			}
			y++;
		}
		return (0);
	}
	return (1);
}

void		ft_print(char **tab)
{
	int		i;

	i = 0;
	while (tab[i] != NULL)
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
}

char		**ft_alloc_tab(int len, int i)
{
	char	**colonnes;
	char	*lignes;
	int		x;
	int		test;

	if (!(colonnes = (char**)malloc(sizeof(char*) * (len + i + 1))))
		return (NULL);
	x = 0;
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

void		ft_solve(t_lst *list, int	len)
{
	char	**tab;
	int		i;

	i = 0;
	(void)list;
	if (!(tab = ft_alloc_tab(len, i)))
		return ;
	while (/*ft_reso(list, tab, len + i, 0) == 0 && */i < len)
	{
		ft_free_tab(tab);
		if(!(tab = ft_alloc_tab(len, i++)))
			return ;
	}
	ft_print(tab);
	ft_free_tab(tab);
}
