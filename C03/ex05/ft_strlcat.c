/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 18:28:39 by gshim             #+#    #+#             */
/*   Updated: 2021/03/31 18:28:39 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int destlen;
	unsigned int i;

	destlen = ft_strlen(dest);
	i = 0;
	while(src[i] != '\0')
	{
		if (i == size - 1)
			break;
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + i);
}

int main(){
	// 0 예외처리만 해주면 될 것 같다.
	char a[] = "";
	char b[] = "";
	printf("%d \n",ft_strlcat(b,a,5));
	printf("%s \n",b);
}