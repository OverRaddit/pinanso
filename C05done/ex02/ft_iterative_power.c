/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 13:03:08 by gshim             #+#    #+#             */
/*   Updated: 2021/04/08 14:37:17 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int i;
	int ret;

	ret = 1;
	if (power < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = 0;
	while (i < power)
	{
		ret = ret * nb;
		i++;
	}
	return (ret);
}
