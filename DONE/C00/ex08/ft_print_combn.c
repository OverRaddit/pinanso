/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 20:43:27 by gshim             #+#    #+#             */
/*   Updated: 2021/03/28 23:55:21 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>

int		g_count = 0;// 현재 조합에서 숫자를 몇개까지 뽑았는지?
int		g_arr[9];// 현재 조합을 arr에 저장한다.

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int n)
{
	int j;
	int k;

	j = 0;
	while (j < n)
	{
		ft_putchar(g_arr[j]+'0');
		j++;
	}
	k = n - 1;
	while (k >= 0)
	{
		if (g_arr[k] != k + 10 - n)
		{
			write(1, ", ", 2);
			return ;
		}
		k--;
	}
	return ;
}

void	ft_print_combn(int n)
{
	int i;

	if (n == g_count)
	{
		ft_print_number(n);
		return ;
	}
	i = 0;
	while (i <= 9)
	{
		if (g_count == 0 || i > g_arr[g_count - 1])
		{
			g_arr[g_count++] = i;
			ft_print_combn(n);
			g_count--;
		}
		i++;
	}
}



