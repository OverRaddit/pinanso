/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 14:41:48 by gshim             #+#    #+#             */
/*   Updated: 2021/04/06 14:50:10 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int i;

	if (nb == 0 || nb == 1)
		return (0);
	i = 2;
	while (i < nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int i;

	i = nb;
	while (ft_is_prime(i) == 0)
		i++;
	return (i);
}

int main(){
	printf("%d\n",ft_is_prime(11677));
	printf("%d\n",ft_find_next_prime(11678));
}