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

int		count = 0;
bool	visited[10] = {false};
int		arr[9];

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

void	ft_print_combn(int n)
{
	int i;
	int j;
	int k;

	if (n == count)
	{
		j = 0;
		while (j < n)
		{
			ft_putnbr(arr[j]);
			j++;
		}

		k = n - 1;
		while (k >= 0)
		{
			if (arr[k] != k + 10 - n)
			{
				write(1, ", ", 2);
				return ;
			}
			k--;
		}
		return ;
	}

	i = 0;
	while (i <= 9)
	{
		if (!visited[i] && (count == 0 || i > arr[count - 1]))
		{
			arr[count++] = i;
			visited[i] = true;
			ft_print_combn(n);
			count--;
			visited[i] = false;
		}

		i++;
	}
}

int main() {
	ft_print_combn(5);
	return 0;
}
