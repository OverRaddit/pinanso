/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 11:15:10 by gshim             #+#    #+#             */
/*   Updated: 2021/04/05 11:15:10 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <unistd.h>
#include <stdio.h>

int	checklen(char *str)
{
	int i;
	int used[256] = {0};

	i = 0;
	while (str[i] != '\0')
	{
		if(used[str[i]] == 1)
			return -1;
		else if(str[i] == '+' || str[i] == '-')
			return -1;
		used[str[i]] = 1;
		i++;
	}
	return (i);
}

void	recursive(int nbr, char *base, int len, int depth)
{
	char mod;

	if(nbr == 0)
		return ;
	mod = base[nbr % len];
	recursive(nbr / len, base, len, depth + 1);
	write(1, &mod, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		baselen;
	char	mod;

	baselen = checklen(base);
	printf("%d \n",baselen);
	if(baselen <= 1)
		return ;
	// 이 부분만 수정하면 되는데,,,
	if(nbr == -2147483648)
	{
		ft_putnbr_base(-2, base);
		ft_putnbr_base(147483648, base);
	}
	if(nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * -1;
	}
	recursive(nbr, base, baselen, 0);
}

int main()
{
	char base[] = "01";
	ft_putnbr_base(16, base);
}