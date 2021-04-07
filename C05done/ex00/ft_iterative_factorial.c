/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 12:59:08 by gshim             #+#    #+#             */
/*   Updated: 2021/04/06 19:49:27 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int i;
	int ret;

	i = 1;
	ret = 1;
	while (i <= nb)
	{
		ret = ret * i;
		i++;
	}
	return (ret);
}