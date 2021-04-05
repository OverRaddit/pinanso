/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 19:18:47 by gshim             #+#    #+#             */
/*   Updated: 2021/03/29 19:18:47 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		// 모든 대문자를 소문자로 일단 바꾼다
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		// 소문자에 대해서만 검사
		if (str[i] >= 97 && str[i] <= 122)
		{
			// 앞자리가 없거나 알파벳이 아니거나 숫자가 아니면 대문자로
			if (i == 0 || (
			!(str[i - 1] >= 65 && str[i - 1] <= 90) &&
			!(str[i - 1] >= 97 && str[i - 1] <= 122) &&
			!(str[i - 1] >= 48 && str[i - 1] <= 57))
			)
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

int main(){
	char a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(a));
}