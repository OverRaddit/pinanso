/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 13:06:25 by gshim             #+#    #+#             */
/*   Updated: 2021/04/08 20:23:38 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int ret;

	ret = 1;
	if (power < 0)
		return (0);
	if (nb == 0)
	{
		if (power == 0)
			return (1);
		return (0);
	}
	if (power == 0)
		return (ret);
	ret = nb * ft_recursive_power(nb, power - 1);
	return (ret);
}
