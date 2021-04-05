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

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int		i;
	int		minus;

	minus = 0;
	i = 0;
	while(str[i] != '\0' && isspace(str[i]) ==0)
		i++;
	while(str[i] != '\0')
	{
		if (str[i] == '-')
			minus++;
		else if (str[i] == '+')
			minus--;
		else if (str[i] >= '0' && str[i] <= '9')
			break ;
		i++;
	}
	while(str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			ft_putchar(str[i]);
		else
			break;
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return ;
	ft_atoi(argv[1]);
}