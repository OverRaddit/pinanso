/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 20:43:27 by gshim             #+#    #+#             */
/*   Updated: 2021/03/27 20:43:27 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_combn(int n){
    if(n==0) return;
    char current = ((char)n)+48;
    //buf[i++] = (char)(nb%10+48);
    write(1,&current,1);
    ft_print_combn(n-1);
    return;
}