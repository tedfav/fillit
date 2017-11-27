/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 10:07:44 by ctrouill          #+#    #+#             */
/*   Updated: 2017/11/27 16:52:17 by tfavart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*
** Take file path in input, and return the number
** of charactere inside the file for a correct allocation
** of the return array of parse_raw().
*/

size_t			buffer_size(const char *path)
{
	size_t		i;
	int			fd;
	char		c;

	i = 0;
	if (!(fd = open(path, O_RDONLY)))
		error("error");
	while (read(fd, &c, 1))
		i++;
	close(fd);
	return (i);
}

/*
** Take file path in input and in a first path alloc a return array
** with the number of char present in the file, and copy
** each charactere occurence to the return array and return the array.
*/

const char		*parse_raw(const char *path)
{
	int			fd;
	int			i;
	char		c;
	char		*ret;

	i = 0;
	if (!(ret = (char*)malloc(sizeof(char) * (buffer_size(path)))))
		return (NULL);
	if (!(fd = open(path, O_RDONLY)))
		error("error");
	while (read(fd, &c, 1))
	{
		ret[i] = c;
		i++;
	}
	ret[i] = '\0';
	close(fd);
	return (ret);
}

/*
** Count number of tetriminos in the
** maps, used to handle error to the validation
** callback.
*/

size_t			number_map(const char *raw)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 1;
	while (raw[i++] != '\0')
		if (raw[i] == '\n')
			if ((raw[i + 1] == '\n')
					&& (raw[i] != '\0'))
				j++;
	return (j);
}

/*
** Check char validity
*/

int				ft_iscallowed(char c)
{
	return (c == '\n'
			|| c == '.'
			|| c == '#');
}

/*
** Check for escape
*/

int				ft_escape(char c1, char c2)
{
	return (c1 == '\n' && c2 == '\n');
}
