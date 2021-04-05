/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 13:03:08 by gshim             #+#    #+#             */
/*   Updated: 2021/04/05 13:03:08 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int i;
	int ret;

	if(nb < 0)
		return 0;
	if(nb == 0)
		return 1;
	i = 0;
	while(i < power)
		ret = ret * ret;
	return ret;
}