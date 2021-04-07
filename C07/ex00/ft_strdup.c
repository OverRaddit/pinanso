/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:34:54 by gshim             #+#    #+#             */
/*   Updated: 2021/04/07 20:34:54 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	int size;

	i = 0;
	size = 0;
	while (src[size] != '\0')
		size++;
	while (i < size + 1)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	while(src[i] != '\0')
		i++;
	str = (char *)malloc(sizeof(char)*i);
	if(str == 0)
		return 0;
	ft_strcpy(str,src);
	return (str);
}

int main()
{
	char a[] = "";
	char *c;
	c = ft_strdup(a);
	//c = strdup(a);
	printf("%s\n",c);
	free(c);
	return (0);
}