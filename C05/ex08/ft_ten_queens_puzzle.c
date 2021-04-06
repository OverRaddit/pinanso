/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 14:51:16 by gshim             #+#    #+#             */
/*   Updated: 2021/04/06 21:08:01 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		g_chess[10][10] = {0};
int		g_vx[10] = {0};
int		g_vy[10] = {0};

void print_chess(void)
{
	int i;
	int j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			printf("%d ", g_chess[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}

void paint(int i, int j, int value)
{
	int k;

	k = 0;
	while (k < 10)
	{
		g_chess[i][k] = value;
		g_chess[k][j] = value;
		k++;
	}
	k = 0;
	while (k < 10)
	{
		if (i + k >= 0 && i + k < 10 && j + k >= 0 && j + k < 10)
			g_chess[i + k][j + k] = value;
		if (i - k >= 0 && i - k < 10 && j - k >= 0 && j - k < 10)
			g_chess[i - k][j - k] = value;
		k++;
	}
}

void recursive(int x, int y, int depth)
{
	int k;
	int j;
	char c;
	printf(">depth %d\n",depth);
	if (depth == 10)
	{
		//print_chess();
		k = 0;
		printf(">%d",k);
		while (k < 10)
		{
			c = g_vx[k] + '0';
			write(1, &c, 1);
			k++;
		}
		write(1, "\n", 1);
		return ;
	}
	j = 0;

	while (j < 10 && g_chess[x][j] == 0)
	{
		paint(x, j, 1);
		g_vx[depth] = x;
		g_vy[depth] = j;
		recursive(x + 1, j, depth + 1);
		paint(x, y, 0);
		g_vx[depth] = 0;
		g_vx[depth] = 0;
		j++;
	}
}



int ft_ten_queens_puzzle(void)
{
	int i;
	int n;

	n = 0;
	i = 0;
	while (i < 10)
		recursive(0, i++, 0);


	return (0);
}

int main()
{
	ft_ten_queens_puzzle();
}
