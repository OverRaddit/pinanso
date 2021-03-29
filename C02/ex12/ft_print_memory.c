/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 01:13:43 by gshim             #+#    #+#             */
/*   Updated: 2021/03/30 01:13:43 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hexa(char n)
{
	ft_putchar(n / 16 + '0');
	if (n % 16 < 10)
	{
		ft_putchar(n % 16 + '0');
	}
	else
	{
		ft_putchar(n % 16 - 10 + 'a');
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int i;
	char *s;

	i = 0;
	s = addr;
	while(*(s+i) != '\n')
	{
		if (i == 0)
			ft_putchar(' ');
		else if (i % 16 == 0)
		{
			ft_putchar(' ');
			write(1, (char*)addr, 16);
			ft_putchar('\n');
			// 주소
			ft_putchar(' ');
		}
		else if (i % 2 == 0)
		{

			ft_putchar(' ');
		}
		ft_print_hexa(*(s+i));
		i++;
	}

}

int main(){
	ft_print_memory("Bonjour les amin",17);
}