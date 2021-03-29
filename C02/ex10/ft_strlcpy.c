/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 23:10:41 by gshim             #+#    #+#             */
/*   Updated: 2021/03/29 23:10:41 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
	int srclen;

	i = 0;
	srclen = ft_strlen(src);
	while (i < size)
	{
		if (srclen <= i)
			dest[i] = '\0';
		else
			dest[i] = src[i];
		if (i == size - 1)
			dest[i] = '\0';
		i++;
	}
	return (srclen);
}
