/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 16:59:54 by gshim             #+#    #+#             */
/*   Updated: 2021/05/14 18:06:45 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		get_word_cnt(char const *str, char c)
{
	int cnt;

	cnt = 0;
	while (*str)
	{
		if (!(*str == c))
		{
			++cnt;
			while (*str && !(*str == c))
				++str;
		}
		if (*str)
			++str;
	}
	return (cnt);
}

static int		len(char const *str, char c)
{
	int		len;

	len = 0;
	while (str[len] && !(str[len] == c))
		++len;
	return (len);
}

static char		**freedom(char **str, int num)
{
	int i;

	i = -1;
	while (++i < num)
		free(str[i]);
	free(str);
	return (NULL);
}

char			**ft_split(char const *str, char c)
{
	int		word_cnt;
	char	**split;
	int		i;
	int		j;

	if (!str)
		return (0);
	word_cnt = get_word_cnt(str, c);
	if (!(split = (char**)ft_calloc(word_cnt + 1, sizeof(char*))))
		return (0);
	i = 0;
	while (i < word_cnt)
	{
		if (!(*str == c))
		{
			if (!(split[i] = (char*)ft_calloc(len(str, c) + 1, sizeof(char))))
				return ((char **)freedom(split, i));
			j = 0;
			while (*str && !(*str == c))
				split[i][j++] = *(str++);
			++i;
		}
		++str;
	}
	return (split);
}
