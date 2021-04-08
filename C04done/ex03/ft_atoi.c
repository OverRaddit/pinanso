/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 10:15:05 by gshim             #+#    #+#             */
/*   Updated: 2021/04/08 10:16:02 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int		minus;
	int		ret;

	minus = 0;
	ret = 0;
	while (check_space(str[0]) == 1)
		str++;
	while (str[0] == '-' || str[0] == '+')
	{
		if (str[0] == '-')
			minus++;
		str++;
	}
	while (str[0] >= '0' && str[0] <= '9')
	{
		ret *= 10;
		ret += (str[0] - '0');
		str++;
	}
	if (minus % 2 == 1)
		ret *= -1;
	return (ret);
}
