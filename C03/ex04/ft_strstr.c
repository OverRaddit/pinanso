/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 18:11:33 by gshim             #+#    #+#             */
/*   Updated: 2021/03/31 18:11:33 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	if(*str == '\0' || *to_find == '\0')
		return (0);

	i = 0;
	while(str[i] != '\0')
	{
		j = 0;
		while(str[i + j] != '\0' || to_find[j] !='\0')
		{
			if(str[i + j] != to_find[j])
				break;
			j++;
		}
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}

int main()
{
	char str1[] = "BlockDMask. He is a smart man";
	char str2[] = "smart";
	char str3[] = "";
	char *c;
	c =  ft_strstr(str1,str2);
	printf("%s", c);

}