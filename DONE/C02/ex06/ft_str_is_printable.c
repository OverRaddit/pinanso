/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 15:59:48 by gshim             #+#    #+#             */
/*   Updated: 2021/03/29 15:59:48 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    if (str[0] == '\0')
    {
        return (1);
    }
    while (str[i] != '\0')
    {
        // printable이 아닌 문자가 있으면 즉시종료
        if (!(str[i] >= 32 && str[i] <= 126))
            return (0);
        i++;
    }
    return (1);
}

int main(){
    printf("%d ", ft_str_is_printable("qwer"));
}