/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 13:42:11 by gshim             #+#    #+#             */
/*   Updated: 2021/04/05 13:42:11 by gshim            ###   ########.fr       */
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

int	main(int argc, char* argv[])
{
	// 현재 경로명까지 다나오는데 클러스터에서 실험해봐야 할듯 싶다.
	write(1, argv[0], ft_strlen(argv[0]) + 1);
	return 0;
}