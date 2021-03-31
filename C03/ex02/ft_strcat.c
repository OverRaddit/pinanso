/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:36:04 by gshim             #+#    #+#             */
/*   Updated: 2021/03/31 16:36:04 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int destlen;
	int i;

	destlen = ft_strlen(dest);
	i = 0;
	while(src[i] != '\0')
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (dest);
}

int main()
{
	char a[100] = "BlockDMask";
	char b[] = "aaabbb";
	ft_strcat(a,b);
	printf("%s", a);

}