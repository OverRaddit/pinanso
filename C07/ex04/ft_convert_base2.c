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

char	*int_to_base(int nbr, char *base_to, int baselen)
{
	char	buf[11];
	char	*ret;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (baselen <= 1)
		return (0);
	if (nbr < 0)
	{
		buf[i++] = '-';
		buf[i++] = base_to[-(nbr % baselen)];
		nbr = nbr * -1;
	}
	while (nbr > 0)
		buf[i++] = base_to[nbr % baselen];
	//@@@@@@@@@@@@@@@@@@@@@
	for(int j=0;j<10;j++)
		printf("%c ",buf[i]);
	//@@@@@@@@@@@@@@@@@@
	ret = (char *)malloc(sizeof(char) * (i + 1));
	ret[i] = '\0';

	while (j < i)
		ret[j] = buf[i - 1 - j];
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
