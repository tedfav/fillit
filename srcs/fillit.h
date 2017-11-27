/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 14:29:39 by ctrouill          #+#    #+#             */
/*   Updated: 2017/11/27 16:58:36 by tfavart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdlib.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include "../libft/libft.h"

# define TETRI_LIMIT 26

typedef struct		s_tetri
{
	int				x;
	int				y;
}					t_tetri;

typedef struct		s_lst
{
	t_tetri			*data;
	int				i;
	struct s_lst	*next;
}					t_lst;

t_lst				*ft_parser(char **tab, size_t size_map);
int					ft_isvalid_tetri(const char *raw);
const char			*parse_raw(const char *path);
int					ft_iscallowed(char c);
int					ft_escape(char c1, char c2);
int					ft_istrailling(const char *str, size_t i);
size_t				buffer_size(const char *path);
size_t				number_map(const char *raw);
void				error(const char *str);
void				ft_free_lst(t_lst *begin);
void				ft_free_tab(char **tab);
void				ft_solve(t_lst *list, int len);
void				ft_affiche(char **data);

#endif
