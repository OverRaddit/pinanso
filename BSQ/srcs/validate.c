/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 13:58:17 by gshim             #+#    #+#             */
/*   Updated: 2021/04/14 13:58:17 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "validate.h"

int check_map_info(char *buf, t_map *map)
{
	int i;

	i = 0;
	while(buf[i] != '\n')
		i++;
	if(i == 4)
	{
		map -> y = buf[0];
		map -> empty = buf[1];
		map -> wall = buf[2];
		map -> full = buf[3];
		if(map->empty == map->wall)
			return (0);
		if(map->empty == map->full)
			return (0);
		if(map->wall == map->full)
			return (0);
		return (1);
	}
	while(buf[i] != '\n')
		i++;
	map -> x = i - 3;
	return (0);
}

int	len(char *buf)
{
	int len;

	len = 0;
	while(buf[len] == '\n')
		len++;
}

void check_validate(char *buf)
{
	int i;
	t_map	*map;

	i = 0;
	while(buf[i] != '\n');
		i++;
	while(buf[i] != '\0')
	{
		if(len(buf + i) != map -> x)
		{
			return (0);
		}
		i += map -> x;
	}

}