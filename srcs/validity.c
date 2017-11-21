/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validity.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 13:06:46 by ctrouill          #+#    #+#             */
/*   Updated: 2017/11/20 13:26:55 by ctrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

/*
** Tetriminos validity module
** What is a valid Tetriminos ?
** ->   4x4
** ->   no more 26 Tetriminos                 ok
** ->   ONLY '.' & '#'                        ok
** ->   # Connected
** ->   Tetriminos  are separated by '\n'
*/

/*
** Check if char is valid for the Tetriminos.
*/

static int	ft_isvalid_char(int c)
{
	return (c == '#'
			|| c == '.'
			|| c == '\n');
}

/*
** Return 1 if the map is valid, otherwise
** 0 if invalid, and abord program.
*/

int		ft_isvalid_tetri(const char *raw)
{
	size_t i;
	size_t j;
	size_t k;
	
	i = 0;
	j = 1;
	k = 0;
	if (number_map(raw) < 1
			|| number_map(raw) > 26)
		return (0);
	while (raw[i] != '\0')
	{
		if (!(ft_isvalid_char(raw[i])))
			return (0);
		if (raw[i] == '\n')
		{
			k++;
			if (k > 5)
				return (0);
			if (raw[i + 1] == '\n')
			{
				j--;
				if (!(j % 5))
					return (0);
				k = 0;
			}
		}
		i++;
		j++;
	}
	return (1);
}
