/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfavart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 13:14:00 by tfavart           #+#    #+#             */
/*   Updated: 2017/11/21 16:55:31 by tfavart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void			ft_free_tab(char **tab)
{
	int			i;

	i = 0;
	if (tab[0] == 0)
	{
		free(tab);
		return ;
	}
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

void			ft_free_lst(t_lst *begin)
{
	t_lst	*tmp;

	while (begin)
	{
		free(begin->data);
		tmp = begin;
		begin = begin->next;
		free(tmp);
	}
	free(begin);
}

static void		ft_data(char **tab, t_tetri *data, int i, int j)
{
	int			ind;
	int			x;
	int			y;

	ind = 0;
	while (ind < 4)
	{
		y = 0;
		while (y < 4)
		{
			x = 0;
			while (x < 4)
			{
				if (tab[y][x] == '#')
				{
					data[ind].x = x - j;
					data[ind].y = y - i;
					ind++;
				}
				x++;
			}
			y++;
		}
		ind++;
	}
}

static t_lst	*ft_new(char **tab)
{
	t_lst		*elem;
	int			i;
	int			j;

	if (!(elem = (t_lst*)malloc(sizeof(t_lst))))
		return (NULL);
	if (!(elem->data = (t_tetri*)malloc(sizeof(t_tetri) * 4)))
		return (NULL);
	elem->next = NULL;
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (tab[i][j] == '#')
			{
				ft_data(tab, elem->data, i, j);
				return (elem);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

t_lst			*ft_parser(char **tab, size_t size_map)
{
	t_lst		*begin;
	t_lst		*tmp;
	t_lst		*new;
	size_t		i;

	if (!(new = ft_new(tab)))
		ft_free_lst(new);
	begin = new;
	i = 1;
	while (i < size_map && tab[i * 4] != '\0')
	{
		tmp = new;
		if (!(new = ft_new(&tab[i * 4])))
			ft_free_lst(begin);
		tmp->next = new;
		i++;
	}
	return (begin);
}
