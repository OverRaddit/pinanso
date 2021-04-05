/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 12:02:41 by gshim             #+#    #+#             */
/*   Updated: 2021/04/05 12:02:41 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <unistd.h>
#include <stdio.h>

int g_check[256] = {0};

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	base_to_str(char *str, char *base)
{
	int i;

	i = 0;
	while(str[0] != '\0')
	{
		// 숫자를 문자로 변환하여 저장
		str[i] = g_check[str[i]] + '0';
	}
}

int	baselen(char *base)
{
	int i;

	i = 0;
	while (*base != '\0')
	{
		// 중복이거나, +-가 나온경우
		if (g_check[base[0]] != 0 || base[0] == '+' || base[0] == '-')
			return (-1);
		// ex) poneyvif 의 각 알파벳의 아스키코드값을 인덱스로 사용
		// => 해당 알파벳 인덱스의 값은 base에서 어떤 수와 매핑되는지 저장됨.
		g_check[base[0]] = i;
		i++;
	}
	if(i == 0 || i == 1)
		return -1;
	return i;
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

int		ft_atoi_base(char *str, char *base)
{
	int		i;
	int		minus;
	int		ret;

	minus = 0;
	i = 0;
	if(baselen(base) == -1)
		return 0;
	base_to_str(str,base);
	while (str[i] != '\0' && isspace(str[i]) == 0)
		i++;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			minus++;
		else if (g_check[str[i]] != 0)
			break ;
		i++;
	}
	ret = str_to_int(str + i);
	if (minus % 2 == 1)
		write(1, "-", 1);
	return ret;
}

int		main(int argc, char *argv[])
{
	char base[] = "poneyvif";
	if (argc != 2)
		return (0);

	printf("%d\n", ft_atoi_base(argv[1], base));
}