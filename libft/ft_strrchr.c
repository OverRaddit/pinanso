/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:26:55 by gshim             #+#    #+#             */
/*   Updated: 2021/05/14 17:57:24 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*s;

	s = (char*)str;
	i = 0;
	while (s[i] != '\0')
		i++;
	if (s[i] == '\0' && s[i] == (unsigned char)c)
		return (s + i);
	i = i - 1;
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return (s + i);
		i--;
	}
	return (NULL);
}
