/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 11:08:12 by gshim             #+#    #+#             */
/*   Updated: 2021/04/10 17:55:02 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int destlen;
	int i;

	destlen = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		strsize;
	char	*ret;

	if (size == 0)
	{
		ret = (char *)malloc(sizeof(char) * 1);
		ret[0] = 0;
		return (ret);
	}
	i = -1;
	strsize = 0;
	while (++i < size)
		strsize += ft_strlen(strs[i]);
	strsize += (size - 1) * ft_strlen(sep);
	ret = (char *)malloc(sizeof(char) * (strsize + 1));
	i = -1;
	while (++i < size - 1)
	{
		ft_strcat(ret, strs[i]);
		ft_strcat(ret, sep);
	}
	ft_strcat(ret, strs[size - 1]);
	return (ret);
}
/*
int main(){
	char *strs[4];
	char sep[] = ", ";
	char *s;

	strs[0] = "lol";
	strs[1] = "1234";
	strs[2] = "poiuic";
	strs[3] = "1234";

	s = ft_strjoin(4, strs, sep);
	printf("%s\n",s);
}
*/