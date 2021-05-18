/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 13:00:43 by gshim             #+#    #+#             */
/*   Updated: 2021/05/18 20:51:50 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *src)
{
	int		i;
	char	*str;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (0);
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

size_t ft_strchr(const char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

static char	*ft_strcat(char *dest, char *src)
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

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		s1size;
	int		s2size;
	char	*ret;

	if (!s1 || !s2)
		return (0);
	i = -1;
	s1size = 0;
	while (s1[s1size] != '\0')
		s1size++;
	s2size = 0;
	while (s2[s2size] != '\0')
		s2size++;
	if (!(ret = (char *)malloc(sizeof(char) * (s1size + s2size + 1))))
		return (0);
	ret[0] = '\0';
	ft_strcat(ret, (char *)s1);
	ft_strcat(ret, (char *)s2);
	return (ret);
}
