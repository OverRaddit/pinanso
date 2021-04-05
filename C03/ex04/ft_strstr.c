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

#include <string.h>
#include <unistd.h>
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
	// 이렇게 반환하던, 0을 반환하던 똑같은 결과가 나온다.
	// NULL을 사용하려면 stdio.h 헤더를 써야 한다.
	return (0);
}

int main()
{
	char str1[] = "";
	char str2[] = "bb";
	char *c1;
	char *c2;
	printf("str1:%s\n",str1);
	c1 =  ft_strstr(str1,str2);
	printf("str1:%s\n",str1);
	c2 =  strstr(str1,str2);
	printf("str1:%s\n",str1);
	printf("%p\n", c1);
	printf("%p\n", c2);
}