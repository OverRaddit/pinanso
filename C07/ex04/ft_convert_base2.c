/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 14:43:42 by gshim             #+#    #+#             */
/*   Updated: 2021/04/10 20:53:42 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		base_to_len(unsigned int n, unsigned int baselen)
{
	if (n < baselen)
		return (1);
	return (base_to_len(n / baselen, baselen) + 1);
}

char	*int_to_base(int nbr, char *base_to, int baselen)
{
	char	*ret;
	int		i;
	int		j;

	j = 0;
	if (baselen <= 1)
		return (0);
	i = base_to_len((unsigned int)nbr, (unsigned int)baselen);
	if (nbr < 0)
		i++;
	ret = (char *)malloc(sizeof(char) * (i + 1));
	ret[i] = '\0';
	if (nbr < 0)
	{
		ret[0] = '-';
		ret[j++] = base_to[-(nbr % baselen)];
		nbr = nbr / baselen;
	}
	while (i > 0)
	{
		ret[j] = base_to[nbr % baselen];
		nbr = nbr / baselen;
		i--;
	}
	return (ret);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		number;
	char	*ret;

	number = ft_atoi_base(nbr, base_from);
	if (number == -1)
		return (0);
	ret = int_to_base(number, base_to, baselen(base_from));
	return (ret);
}
