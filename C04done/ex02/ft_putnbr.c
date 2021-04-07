/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:17:21 by gshim             #+#    #+#             */
/*   Updated: 2021/04/07 20:17:21 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		i;
	char	buf[11];

	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		ft_putchar('-');
		nb = nb * -1;
	}
	i = -1;
	if (nb == 0)
		ft_putchar('0');
	while (nb > 0)
	{
		buf[++i] = (nb % 10 + 48);
		nb = nb / 10;
	}
	while (i >= 0)
		ft_putchar(buf[i--]);
}
