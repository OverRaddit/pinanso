/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 14:34:51 by gshim             #+#    #+#             */
/*   Updated: 2021/03/27 14:34:51 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_alphabet(void)
{
    write(1, "abcdefghijklmnopqrstuvwxyz", 27);
}

int    main(void){
    ft_print_alphabet();
    return (0);
}