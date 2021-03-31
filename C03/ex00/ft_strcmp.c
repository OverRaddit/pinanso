/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:08:52 by gshim             #+#    #+#             */
/*   Updated: 2021/03/31 16:08:52 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int main(){
	printf("%d\n", ft_strcmp("aaa", "aaa"));
	printf("%d\n", ft_strcmp("aab", "aaa"));
	printf("%d\n", ft_strcmp("aaa", "aab"));
}