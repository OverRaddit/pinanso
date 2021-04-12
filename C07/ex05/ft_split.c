/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 01:33:32 by gshim             #+#    #+#             */
/*   Updated: 2021/04/12 01:33:32 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 단어가 0개면 널문자열 반환해야함.

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



int		ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	if (*to_find == '\0')
		return (-1);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0')
		{
			if (str[i] == to_find[j])
				return (i);
			j++;
		}
		i++;
	}
	return (-1);
}

int		sep_count(char *str, char *charset)
{
	int count;

	count = 0;
	while(*str)
	{
		if(check(*str, charset) == 1)
			count++;
		str++;
	}
	return (count);
}

int		check(char c, char *charset)
{
	while(*charset)
	{
		if(*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	int size;

	i = 0;
	size = ft_strlen(src);
	while (str[i] != '\0' || (str[i] != ))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	int		wordcount;
	int		i;
	int		wordlen;
	char	**ret;

	wordcount = sep_count(str, charset) + 1;
	printf("wordcount= %d\n",wordcount);
	ret = (char **)malloc(sizeof(char *) * (wordcount + 1));
	ret[wordcount] = 0;
	i = 0;

	while(i < wordcount)
	{
		printf("%s\n",str);
		wordlen = ft_strstr(str, charset);
		printf("wordlen= %d, i=%d\n",wordlen,i);
		ret[i] = (char *)malloc(sizeof(char) * (wordlen + 1));
		printf("middle2\n");
		// unsigned int 관련 문제가 발생할 것 같다.

		ft_strcpy(ret[i], str);
		str += (unsigned int)(wordlen + 1);
		printf("end\n");
		i++;
	}
	return (ret);
}

int main(){
	char a[] = "asdf,aefb.aesrgv,aseg.br";
	char b[] = ",.";
	char **c;
	c = ft_split(a,b);
	for(int i=0;i<5;i++)
		printf("%s \n",c[i]);
}