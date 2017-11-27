/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 13:37:29 by ctrouill          #+#    #+#             */
/*   Updated: 2017/11/27 16:50:00 by tfavart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int				main(int ac, char **av)
{
	const char	*str;
	char		**tab;
	t_lst		*list;
	size_t		nb_tetri;

	if (ac != 2)
	{
		ft_putendl("Usage: fillit <input>.fillit");
		return (1);
	}
	str = parse_raw((const char*)(av[1]));
	if (!ft_isvalid_tetri(str))
		error("error");
	nb_tetri = number_map(str);
	tab = ft_strsplit(str, '\n');
	free((char*)str);
	list = ft_parser(tab, nb_tetri);
	ft_free_tab(tab);
	ft_solve(list, nb_tetri);
	ft_free_lst(list);
	return (0);
}
