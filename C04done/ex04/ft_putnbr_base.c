/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 11:15:10 by gshim             #+#    #+#             */
/*   Updated: 2021/04/08 14:37:03 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		base_strlen(char *str)
{
	int i;
	int used[256];

	i = 0;
	while (i < 256)
		used[i] = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (used[(int)str[i]] == 1 || str[i] == '+' || str[i] == '-')
			return (-1);
		used[(int)str[i]] = 1;
		i++;
	}
	return (i);
}

void	recursive(int nbr, char *base, int len, int depth)
{
	char mod;

	if (nbr == 0)
		return ;
	mod = base[nbr % len];
	recursive(nbr / len, base, len, depth + 1);
	write(1, &mod, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		baselen;

	baselen = base_strlen(base);
	if (baselen <= 1)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		recursive(-(nbr / baselen), base, baselen, 0);
		write(1, &base[-(nbr % baselen)], 1);
	}
	else if (nbr == 0)
		write(1, "0", 1);
	else
		recursive(nbr, base, baselen, 0);
}
