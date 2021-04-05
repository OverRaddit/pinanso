/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:14:57 by gshim             #+#    #+#             */
/*   Updated: 2021/03/29 18:14:57 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        // 대문자가가 있으면 소문자로 변환
        if (str[i] >= 65 && str[i] <= 90){
            str[i] = str[i] + 32;
        }
        i++;
    }
    return (str);
}

int main(){
    char a[] = "Hello, world!";
    printf("%s ", ft_str_is_strupcase(a));
}