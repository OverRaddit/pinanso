#include <stdio.h>

// 성능검사 필요
int		word_count(char *str, char *to_find)
{
	int i;
	int j;
	int count;

	count = 0;
	if (*to_find == '\0')
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0')
		{
			if (str[i] == to_find[j])
			{
				count++;
				break ;
			}
			j++;
		}
		i++;
	}
	return (count);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0')
		{
			if (str[i] == to_find[j])
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}

int main(){
	char a[] = "asdf,aefb.aesrgv,aseg.br";
	char b[] = ",.";
	printf("%s \n",ft_strstr(a,b));
}