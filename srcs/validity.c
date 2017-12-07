/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validity.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 13:06:46 by ctrouill          #+#    #+#             */
/*   Updated: 2017/12/01 18:11:39 by tfavart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*
** Check if each tetriminos grid contains ONLY
** four \# char. By using offset array incrementor,
** return 0 if number is incorrect.
*/

static int		ft_isover(const char *raw, size_t i, size_t j)
{
	while (raw[++i] != '\0')
	{
		if (raw[i] == '#')
			j++;
		if (raw[i] == '\n' && raw[i + 1] == '\n')
		{
			if (j != 4)
				return (0);
			j = 0;
		}
	}
	if (j != 4)
		return (0);
	return (1);
}

/*
** Check if  tetriminos are correctly delimited
** by an \n check. The search is based in a sequential
** search by checking using offset.
*/

static int		ft_isrline(const char *raw, size_t len, size_t cur)
{
	while (raw[cur] != '\0' && cur < len)
	{
		if (raw[cur] != '\n')
			return (0);
		cur = cur + 21;
	}
	return ((raw[len] != '\n') ? 1 : 0);
}

/*
** Verify if the tab is uniform in size, meaning 4x4
** and each characteres is correct. By incrementing
** in the raw buffer, when encountering \n\n suite,
** the skipper, check if the i iterator is correctly
** refered as the reloation.
** Formulae: f(f(x),y) = 19x + 2y
** Example: 1 occurence = 19 * 1 + 2 * 0 = 19
**			2 occurence = 19 * 2 + 2 * 1 = 40
** The count start at 0 so the real cursor is 20, or 41.
** By using a bruteforce methods at his finest, we check
** if the iterator i equals to the calculus result.
** Increments are implicits.
*/

static int		ft_isuniform(const char *raw, size_t i, size_t x, size_t y)
{
	while (raw[++i] != '\0')
	{
		if (!(ft_iscallowed(raw[i])))
			return (0);
		if (raw[i] == '\n' && (raw[i + 1] == '\n' || raw[i + 1] == '\0'))
			if ((i != ((++x * 19) + (++y * 2))))
				return (0);
	}
	return (1);
}

/*
** Sequencial search between each tetriminos blocks.
** Iteration will be executed for each blocks, when
** the limit is reached, the block cursor will be incremented
** to 21, the size of the block `plus` pos in the first char.
** For each characters, an `if` forest will be adapted to
** check correct neightboor; If the condition is satisfacted,
** the k iterator will be incremented. At the end of the
** block iteration, a check will be passed, if the iterator
** is 6 OR 8 (the only possible combinaison for linkage),
** pass or else abort function and return an
** invalidity signal: 0.
*/

static int		ft_islinked(const char *raw, int i, int cur, int len)
{
	size_t k;

	while (i < len)
	{
		k = 0;
		while ((i != cur + 1) && (i < len))
		{
			if (raw[i] == '#' && raw[i + 1] == '#' && (i + 1 < cur + 1))
				k++;
			if (raw[i] == '#' && raw[i + 5] == '#' && (i + 5 < cur + 1))
				k++;
			if (raw[i] == '#' && raw[i - 1] == '#' && (i - 1 > cur - 21))
				k++;
			if (raw[i] == '#' && raw[i - 5] == '#' && (i - 5 > cur - 21))
				k++;
			i++;
		}
		if (k != 6 && k != 8)
			return (0);
		cur = cur + 21;
	}
	return (1);
}

/*
** Centralized endpoint of checking process.
** Check in a first part if the number doesn't exceed
** twenty-six grids and non signed values.
** The other part process if the tetrimos
** doesnt overflow the grid, check if each
** tetriminos are correctly delimited by an \n
** and the last one ended by \0, and finally
** check for correct link between tetriminos
** characteres, links should equals to 6 `eq` 8
** respectively.
*/

int				ft_isvalid_tetri(const char *raw)
{
	if (number_map(raw) < 1
		|| number_map(raw) > 26)
		return (0);
	if (!(ft_istrailling(raw, ft_strlen(raw)))
		|| !(ft_isover(raw, -1, 0))
		|| !(ft_isrline(raw, ft_strlen(raw), 20))
		|| !(ft_isuniform(raw, -1, 0, -1))
		|| !(ft_islinked(raw, 0, 20, (int)ft_strlen(raw))))
		return (0);
	return (1);
}
