/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 14:37:39 by gshim             #+#    #+#             */
/*   Updated: 2021/04/08 14:43:23 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	g_check[256] = {0};

void	init(void)
{
	int i;

	i = -1;
	while (++i < 255)
		g_check[i] = -1;
}

int		baselen(char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		if (g_check[(int)base[i]] != -1 || base[i] == '+' || base[i] == '-')
		{
			return (-1);
		}
		g_check[(int)base[i]] = i;
		i++;
	}
	return (i);
}

int		str_to_int(char *str, int baselen)
{
	int ret;

	ret = 0;
	while (str[0] != '\0' && g_check[(int)str[0]] != -1)
	{
		ret *= baselen;
		ret += g_check[(int)str[0]];
		str++;
	}
	return (ret);
}

int		ft_atoi_base(char *str, char *base)
{
	int		minus;
	int		ret;
	int		basenum;

	init();
	basenum = baselen(base);
	if (basenum <= 1)
		return (-1);
	while ((*str == ' ' || (*str >= 9 && *str <= 13)))
		str++;
	minus = 0;
	while (str[0] == '-' || str[0] == '+')
	{
		if (str[0] == '-')
			minus++;
		str++;
	}
	ret = str_to_int(str, basenum);
	if (minus % 2 == 1)
		ret *= -1;
	return (ret);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	ft_atoi_base(nbr, base_from);
}
