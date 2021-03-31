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
			ft_putchar((char)(i / 10) + (char)48);
			ft_putchar((char)(i % 10) + (char)48);
			ft_putchar(' ');
			ft_putchar((char)(j / 10) + (char)48);
			ft_putchar((char)(j % 10) + (char)48);
			if (i == 98 && j == 99)
				return ;
			write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
