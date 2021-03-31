/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 00:41:26 by gshim             #+#    #+#             */
/*   Updated: 2021/03/28 14:32:53 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			// i의 10의 자리수
			ft_putchar((i / 10) + 48);
			// i의 1의 자리수
			ft_putchar((i % 10) + 48);
			ft_putchar(' ');
			// j의 10의 자리수
			ft_putchar((j / 10) + 48);
			// j의 1의 자리수
			ft_putchar((j % 10) + 48);

			if (i == 98 && j == 99)
				return ;
			write(1, ", ", 2);
			j++;
		}
		i++;
	}
}

int main()
{
	ft_print_comb2();
}