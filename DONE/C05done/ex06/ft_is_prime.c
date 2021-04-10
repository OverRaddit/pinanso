/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 13:26:07 by gshim             #+#    #+#             */
/*   Updated: 2021/04/10 12:51:32 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i <= 46340)
	{
		if (i * i == nb)
			return (i);
		else if (i * i > nb)
			return (i - 1);
		i++;
	}
	return (i);
}

int	ft_is_prime(int number)
{
	int i;
	int sqrt;

	sqrt = ft_sqrt(number);
	if (number <= 1)
		return (0);
	if (number == 2 || number == 3)
		return (1);
	i = 2;
	while (i <= sqrt)
	{
		if (number % i == 0)
			return (0);
		i++;
	}
	return (1);
}
