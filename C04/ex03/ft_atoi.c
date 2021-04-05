/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 10:15:05 by gshim             #+#    #+#             */
/*   Updated: 2021/04/05 10:15:05 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if(!(str[i] >= '0' && str[i] <= '9'))
			break;
		i++;
	}
	return (i);
}

int		str_to_int(char *str)
{
	int i;
	int strsize;
	int ret;
	int power;

	ret = 0;
	power = 1;
	strsize = ft_strlen(str);
	i = strsize - 1;
	while(i >= 0)
	{
		ret = ret + (str[i] - '0') * power;
		i--;
		power = power * 10;
	}
	return (ret);
}

int		ft_atoi(char *str)
{
	int		i;
	int		minus;
	int		ret;

	minus = 0;
	i = 0;
	// 공백파트 제끼기.
	while (str[i] != '\0' && isspace(str[i]) == 0)
		i++;
	// 마이너스나 플러스 부호 파트
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			minus++;
		else if (str[i] >= '0' && str[i] <= '9'){
			break ;
		}
		i++;
	}
	ret = str_to_int(str + i);
	if (minus % 2 == 1)
		ft_putchar('-');
	//printf("minus:%d",minus);
	return ret;
}

int		main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	printf("%d\n", ft_atoi(argv[1]));
}
