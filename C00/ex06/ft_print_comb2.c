/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 00:41:26 by gshim             #+#    #+#             */
/*   Updated: 2021/03/27 00:41:26 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// for문을 while문으로 고쳐야 한다.
// 그냥 putchar를 가져와서 사용하는게 나을 듯 하다.
void ft_print_comb2(void){
    for(int i=0;i<=99;i++){
        for(int j=i+1;j<=99;j++){
            char a = (char)(i/10) + (char)48;
            char b = (char)(i%10) + (char)48;
            char c = (char)(j/10) + (char)48;
            char d = (char)(j%10) + (char)48;
            char space = (char)32;
            write(1,&a,1);
            write(1,&b,1);
            write(1,&space,1);
            write(1,&c,1);
            write(1,&d,1);
            if(i==98&&j==99) return;
            write(1,", ",2);
        }
        
    }
}

int main(void){
    ft_print_comb2();
}
