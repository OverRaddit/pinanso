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
#include <string.h>

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
	unsigned int srclen;
	unsigned int i;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if(size < destlen)
		return (srclen + size);
	i = 0;
	while(i < srclen && i + destlen + 1 < size)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}

int main(){
	char a[100] = "abc";
	char b[] = "def";
	printf("%d \n",ft_strlcat(a,b,5));
	printf("%d \n",strlcat(a,b,5));
	printf("%s \n",b);
}