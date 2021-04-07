/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 14:51:16 by gshim             #+#    #+#             */
/*   Updated: 2021/04/06 22:02:21 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	recursive(int x, int y);

int		g_count = 0;
int		g_vx[10] = {0};
int		g_vy[10] = {0};

int		abs(int num)
{
	if (num < 0)
		return (num * -1);
	else
		return (num);
}

void	print_answer(void)
{
	int		k;
	char	c;

	k = -1;
	if (g_count != 0)
		write(1, "\n", 1);
	while (++k < 10)
	{
		c = g_vx[k] + '0';
		write(1, &c, 1);
	}
}

void	recursive(int x, int y)
{
	int		i;

	i = 0;
	while (i < y)
	{
		if (g_vx[i] == x || g_vy[i] == y)
			return ;
		else if (abs(g_vx[i] - x) == abs(g_vy[i] - y))
			return ;
		i++;
	}
	g_vx[y] = x;
	g_vy[y] = y;
	if (y == 9)
	{
		print_answer();
		g_count++;
		return ;
	}
	i = -1;
	while (++i < 10)
		recursive(i, y + 1);
}

int		ft_ten_queens_puzzle(void)
{
	int i;

	i = -1;
	while (++i < 10)
		recursive(i, 0);
	return (g_count);
}
