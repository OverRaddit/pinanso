/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:49:22 by gshim             #+#    #+#             */
/*   Updated: 2021/03/29 17:49:22 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_str_is_strupcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        // 소문자가가 있으면 대문자로 변환
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - (char)32;
            //printf("@");
        }
        
        i++;
    }
    //str 포인터가 아닌 str배열 자체가 반환되어야 한다
    return (str);
}

int main(){
    char a[] = "Hello, world!";
    // 문자열 포인터와 문자열 배열을 구분하자.
    // https://www.youtube.com/watch?v=M7KPfIBzxZ8
    //char *b = "Hello, world!";
    
    printf("%s \n", ft_str_is_strupcase(a));
    //printf("%s \n", ft_str_is_strupcase(b));
}