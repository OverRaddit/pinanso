/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 15:38:27 by gshim             #+#    #+#             */
/*   Updated: 2021/03/29 15:38:27 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    if (str[0] == '\0')
    {
        //printf("null\n");
        return (1);
    }
    while (str[i] != '\0')
    {
        //printf("i = %d\n",i);
        // 숫자가 아닌 문자 출현 시 즉시 종료
        if (!(str[i] >= '0' && str[i] <= '9'))
            return (0);
        i++;
    }
    return (1);
}

int main(){
    printf("%d ", ft_str_is_numeric(""));
}