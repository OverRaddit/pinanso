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

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' || to_find[j] != '\0')
		{
			if (str[i + j] != to_find[j])
				break ;
			j++;
		}
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}

// 성능검사 필요
int		word_count(char *str, char *to_find)
{
	int i;
	int j;
	int count;

	count = 0;
	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' || to_find[j] != '\0')
		{
			if (str[i + j] != to_find[j])
			{
				count++;
				break ;
			}
			j++;
		}
		i++;
	}
	return (count);
}
/*
	? charset은 하나의 구분자일까 아니면 각인덱스에 있는 각각의 문자들이 모두 하나의 구분자일까? 후자일듯...?

	들어오는 배열?에 빈 문자열이 없으니 구분자의 개수 + 1 이 단어의 개수가 될 것이다.
	1. 구분자를 기준으로 나눌때 단어의 개수는 몇개일까?
	2. 단어의 개수 + 1 사이즈를 동적으로 할당받는다.
	3. 짤라서 할당받은 메모리에 넣는다.
*/

char	**ft_split(char *str, char *charset)
{
	int		wordcount;
	int		i;
	char	**ret;
	char	*start;

	wordcount = word_count(str, charset) + 1;
	ret = (char **)malloc(sizeof(char*) * (wordcount));
	ret[wordcount] = 0;
	i = 0;
	while(i < wordcount)
	{
		start = str;
		ret[i] = (char *)malloc(sizeof(char) * (start-ft_strstr(str, charset)));

		i++;
	}

	return (ret);
}
