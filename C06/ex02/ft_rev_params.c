/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 13:50:34 by gshim             #+#    #+#             */
/*   Updated: 2021/04/05 13:50:34 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	main(int argc, char *argv[])
{
	int i;

	i = argc - 1;
	while(i >= 1)
	{
		write(1, argv[i], ft_strlen(argv[i]) + 1);
		if(!(i == 1))
			write(1, "\n", 1);
		i--;
	}
}