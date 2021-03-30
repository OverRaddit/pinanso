/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 14:35:45 by gshim             #+#    #+#             */
/*   Updated: 2021/03/30 16:15:57 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	int size;

	i = 0;
	size = ft_strlen(src);
	while (i < size + 1)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int main(){
	char a[] = "helloasedgaerywsrthsrthsr";
	char b*;
}