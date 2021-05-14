/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:06:30 by gshim             #+#    #+#             */
/*   Updated: 2021/05/14 19:38:47 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (dest == src)
		return (dest);
	d = (unsigned char*)dest;
	s = (unsigned char*)src;
	i = -1;
	if (d <= s)
	{
		while (++i < len)
			d[i] = s[i];
	}
	else
	{
		while (--len + 1 >= 1)
			d[len] = s[len];
	}
	return (dest);
}
