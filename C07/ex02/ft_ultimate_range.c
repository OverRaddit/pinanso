/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 11:03:57 by gshim             #+#    #+#             */
/*   Updated: 2021/04/10 16:48:25 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*arr;
	int	i;

	if (max > min)
		size = max - min;
	else
		return (0);
	arr = (int *)malloc(sizeof(int) * size);
	*range = arr;
	i = 0;
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	return (size);
}
