/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 13:58:17 by gshim             #+#    #+#             */
/*   Updated: 2021/04/15 11:12:08 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "validate.h"
#include <stdio.h>

int check_map_info(char *buf, t_map *map)
{
	printf("checkmapinfo~\n");
	int i;

	i = 0;
	map -> y = 0;
	while (buf[0] >= '0' && buf[0] <= '9')
	{
		map -> y *= 10;
		map -> y += (buf[0] - '0');
		buf++;
	}
	map -> graph = (char**)malloc(sizeof(char*) * (map -> y + 1));
	map -> graph[map -> y] = 0;
	map -> empty = *buf++;
	map -> wall = *buf++;
	map -> full = *buf++;
	if(map->empty == map->wall)
		return (0);
	if(map->empty == map->full)
		return (0);
	if(map->wall == map->full)
		return (0);
	if(map -> y == 0)
		return (0);
	printf("before while\n");
	buf++;
	while(buf[i] != '\n')
		i++;
	printf("next line to next line = %d\n",i);
	map -> x = i;
	printf("map x=%d\n",map -> x);
	return (1);
}

int	len(char *buf)
{
	int len;

	len = 0;
	while(buf[len] != '\n' && buf[len] != '\0')
		len++;
	return (len);
}

int check_validate(char *buf, t_map *map)
{
	printf("check_validate start\n");
	int i;
	int y;

	i = 0;
	y = 0;
	while(buf[i] != '\n')
		i++;
	printf("i = %d\n",i);
	while(buf[++i] != '\0')
	{
		printf("i = %d hello\n",i);
		printf("buf[%d] = %c, len: %d, map x: %d\n",i,buf[i],len(buf + i), map -> x);
		if(len(buf + i) != map -> x)
			return (0);
		if(!(map -> graph[i] = (char*)malloc(sizeof(char) * (map -> x + 1))))
			return (0);
		ft_strcpy(map -> graph[i], buf + i);
		i += map -> x;
		y++;
	}
	printf("i = %d hello3\n",i);
	if(y == map -> y)
		return (1);
	return (0);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	int size;

	i = 0;
	size = len(src);
	printf("copy start, len = %d\n",size);
	while (i < size)
	{
		//printf("in while\n");
		printf("%c ",src[i]);
		dest[i] = src[i];
		i++;
	}
	printf("\n");
	dest[i] = '\0';
	return (dest);
}