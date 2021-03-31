/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:16:46 by gshim             #+#    #+#             */
/*   Updated: 2021/03/31 16:16:46 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	s1 size, s2 size < n
	=> s1,s2중 더 짧은 길이만큼만 비교.
*/

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while(s1[i] !='\0' && s2[i] != '\0')
	{
		if(s1[i] < s2[i])
			return (-1);
		else if(s1[i] > s2[i])
			return (1);

		if(i == n-1)
			break;
		i++;
	}
	return (0);
}

int main(){
	printf("%d\n", ft_strncmp("aaa", "aaa", 4));
	printf("%d\n", ft_strncmp("aab", "aaa", 4));
	printf("%d\n", ft_strncmp("aaa", "aab", 4));
}