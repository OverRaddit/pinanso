/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 13:42:44 by gshim             #+#    #+#             */
/*   Updated: 2021/04/15 10:23:38 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAP_H
# define FT_MAP_H

typedef struct	s_map
{
	// map[10][3] 인경우 y = 10(줄의수), x = 3
	int		y;
	int		x;
	char	empty;
	char	wall;
	char	full;
	char	**graph;
}				t_map;

#endif