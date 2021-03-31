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

int		g_count = 0;
bool	g_visited[10] = {false};
int		g_arr[9];

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		i;
	char	buf[11];

	i = 0;
	if (nb == 0)
		ft_putchar('0');
	while (nb > 0)
	{
		buf[i++] = (char)(nb % 10 + 48);
		nb = nb / 10;
	}
	i = i - 1;
	while (i >= 0)
	{
		ft_putchar(buf[i--]);
	}
}

void	ft_print_number(int n)
{
	int j;
	int k;

	j = 0;
	while (j < n)
	{
		ft_putnbr(g_arr[j]);
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
		if (!g_visited[i] && (g_count == 0 || i > g_arr[g_count - 1]))
		{
			g_arr[g_count++] = i;
			g_visited[i] = true;
			ft_print_combn(n);
			g_count--;
			g_visited[i] = false;
		}
		i++;
	}
}
