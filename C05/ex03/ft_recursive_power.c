/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 13:06:25 by gshim             #+#    #+#             */
/*   Updated: 2021/04/05 13:06:25 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
	int i;
	int ret;
	ret = 1;
	if(nb < 0)
		return 0;
	if(nb == 0){
		return 1;
	}
	if(power == 0){
		return ret;
	}
	ret = nb * ft_recursive_power(nb, power - 1);

}

int main(){
	int a = ft_recursive_power(2,10);
	printf("%d \n",a);
}