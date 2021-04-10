/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 14:50:05 by gshim             #+#    #+#             */
/*   Updated: 2021/04/10 23:56:14 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char				*ft_strdup(char *src)
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

t_stock_str				*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	t_stock_str			*data;

	if (!(data = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1))))
		return (0);
	i = 0;
	while (i < ac && av[i] != 0)
	{
		data[i].size = ft_strlen(av[i]);
		data[i].str = av[i];
		data[i].copy = ft_strdup(av[i]);
		i++;
	}
	data[i].size = 0;
	data[i].str = 0;
	data[i].copy = 0;
	return (data);
}
