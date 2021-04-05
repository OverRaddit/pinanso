/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 15:53:11 by gshim             #+#    #+#             */
/*   Updated: 2021/03/29 15:53:11 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str)
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
        // 소문자가 아닌 문자가 있으면 즉시종료
        if (!(str[i] >= 97 && str[i] <= 122))
            return (0);
        i++;
    }
    return (1);
}

int main(){
    printf("%d ", ft_str_is_lowercase(""));
}
