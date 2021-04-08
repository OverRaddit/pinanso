/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 10:50:51 by gshim             #+#    #+#             */
/*   Updated: 2021/04/08 11:01:47 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*arr;
	int	i;

	if (max > min)
		size = max - min;
	else
		return (0);
	arr = (int *)malloc(sizeof(int) * size);
	i = 0;
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

int main(){
	int *arr;
	arr = ft_range(1,5);
	for(int i=0;i<4;i++)
		printf("%d ",arr[i]);
}
