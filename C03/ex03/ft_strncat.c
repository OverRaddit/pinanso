/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:50:43 by gshim             #+#    #+#             */
/*   Updated: 2021/03/31 17:50:43 by gshim            ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int destlen;
	unsigned int i;

	destlen = ft_strlen(dest);
	i = 0;
	while(src[i] != '\0')
	{
		if (i == nb)
			break;
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
	char *c;
	c =  ft_strncat(a,b,4);
	printf("%s", c);

}