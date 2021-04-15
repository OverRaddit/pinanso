/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 13:13:57 by gshim             #+#    #+#             */
/*   Updated: 2021/04/15 11:21:56 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include <stdio.h>
void bsq(char *filename)
{
	char	*buf;
	t_map	*map;
	// 파일을 읽는다.
	buf = read_file(filename);
	map = (t_map *)malloc(sizeof(t_map*));
	// 유효한 지도인지 판단한다+read한 파일을 map 구조체로 변환한다.
	check_map_info(buf, map);
	printf("y = %d, x = %d \n",map->y,map->x);
	printf("empty = %c, wall = %c, full = %c\n",map->empty,map->wall,map->full);
	printf("check: %d\n",check_validate(buf, map));

	// 변환한 map 구조체를 저장한다.
	for(int i=0;i< map->y ;i++)
	{
		for(int j=0;j< map->x ;j++)
			printf("%c ", map->graph[i][j]);
		printf("@\n");
	}

}
  X @ g �

char **arr;
int visited[30][30];
int d[1001][1001];
int ans;
void fill(int x, int y, int len)
{
	int i;
	int j;

	i = x - (len - 1);
	for (; i <= x; i++)
		for (int j = y - (len - 1); j <= y; j++)
			arr[i][j] = 'x';
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 27; j++)
			write(1, &arr[i][j], 1);
		write(1, "\n", 1);
	}
}
/*
int main(void) {
	//
	//....o.....o.........o......
	//............o..........o...
	//................o..........
	//......................o....
	//....o..o..o....o...........
	//......o....................
	//......o..............o.....
	//..o.......o................
	// map을 2차원 배열에 입력한다.
	int i;

	i = 0;
	arr[0] = "...........................";
	arr[1] = "....o......................";
	arr[2] = "............o..............";
	arr[3] = "...........................";
	arr[4] = "....o......................";
	arr[5] = "...............o...........";
	arr[6] = "...........................";
	arr[7] = "......o..............o.....";
	arr[8] = "..o.......o................";

	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 27; j++)
		{
			if (arr[i][j] == '.')
			{
				d[i][j] = 1;
				ans = 1;
			}
		}

	// 각 좌표를 우측하단으로 하는 square의 최댓값을 d배열에 저장한다.
	for (int i = 1; i < 9; i++) {
		for (int j = 1; j < 27; j++) {
			if (arr[i - 1][j] == '.' && arr[i - 1][j - 1] == '.' && arr[i][j - 1] == '.') {
				d[i][j] = min(d[i - 1][j - 1], d[i - 1][j]);
				d[i][j] = min(d[i][j], d[i][j - 1]) + 1;
			}
			ans = max(ans, d[i][j]);
		}
	}

	// 가장큰 square를 맵에 표시한다.
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 27; j++)
		{
			if (d[i][j] == ans)
			{
				fill(i, j, ans);
				exit(0);
			}
		}
	}
    return 0;
}
*/

int	main(int argc, char *argv[])
{
	int i;

	i = 0;
	while(++i < argc)
		bsq(argv[i]);
	return (0);
}
