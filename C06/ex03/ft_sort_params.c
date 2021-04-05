/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 13:53:16 by gshim             #+#    #+#             */
/*   Updated: 2021/04/05 13:53:16 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

void	ft_swap(char **a, char **b)
{
	char *temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s1[i] !='\0' && s2[i] != '\0')
	{
		if(s1[i] < s2[i])
			return (-1);
		else if(s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_sort_str_tab(char **argv, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size - 1)
	{
		// argv[0] 은 안쓰는 것에 주의한다.
		j = 1;
		while (j < size - 1 - i)
		{
			if(ft_strcmp(argv[j], argv[j + 1])){
				printf("we need to swap %s, %s\n",argv[j],argv[j + 1]);
				ft_swap(argv + j, argv + j + 1);
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int i;

	ft_sort_str_tab(argv, argc);
	i = 1;
	while(i < argc)
	{
		write(1, argv[i], ft_strlen(argv[i]));
		if(!(i == argc - 1))
			write(1, "\n", 1);
		i++;
	}
}