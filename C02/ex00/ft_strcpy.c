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

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	int size;

	i = 0;
	size = ft_strlen(src);
	// 문자열의 널문자까지 복사해야 한다. 매우중요.
	while(i < size + 1)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int main(){
	char a[10] = "abcdeaaaaa";
	char b[10] = "fghij";
	ft_strcpy(a,b);
	printf("%s ",a);
}