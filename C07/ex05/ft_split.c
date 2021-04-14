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

#include <stdio.h>
#include <stdlib.h>

int		is_sep(char c, char *charset)
{
	while(*charset)
	{
		if(c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int		get_word_count(char *str, char *charset)
{
	int ret;

	ret = 0;
	while(*str)
	{
		if(!is_sep(*str, charset))
		{
			ret++;
			while(*str && !is_sep(*str, charset))
				str++;
		}
	}
	return (ret);
}

int		len(char *str, char *charset)
{
	int	len;

	len = 0;
	while(str[len] && !is_sep(str[len], charset))
		len++;
	return (len);
}

char **ft_split(char *str, char *charset)
{
	int		word_count;
	int		i;
	int		j;
	char	**ret;

	word_count = get_word_count(str, charset);
	ret = (char **)malloc(sizeof(char*) * (word_count + 1));
	i = 0;
	while(i < word_count)
	{
		if(!is_sep(str, charset))
		{
			ret[i] = (char *)malloc(sizeof(char) * (len(str, charset) + 1));
			j = 0;
			while(*str && !is_sep(*str, charset))
				ret[i][j++] = *(str++);
			ret[i][j] = 0;
			i++;
		}
		str++;
	}
	ret[i] = 0;
	return (ret);
}
