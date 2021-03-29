/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 14:35:45 by gshim             #+#    #+#             */
/*   Updated: 2021/03/29 14:35:45 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;
    int size;

    i = 0;
    size = ft_strlen(src);
    while (i < n)
    {
        if (size <= i)
            dest[i] = '\0';
        else 
            dest[i] = src[i];
        i++;
    }
    return (dest);
}

int main(){
    char a[10] = "abcdeaaac";
    char b[10] = "fghij";
    printf("%s\n",a);
    ft_strncpy(a,b,3);
    printf("%s\n",a);
}