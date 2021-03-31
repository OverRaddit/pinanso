/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 01:13:43 by gshim             #+#    #+#             */
/*   Updated: 2021/03/30 22:49:32 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_first(unsigned int n, int depth)
{
	char	mod;

	if (depth == 16)
		return ;
	else
	{
		mod = "0123456789abcdef"[n % 16];
		ft_print_first(n / 16, depth + 1);
		write(1, &mod, 1);
		if (depth == 0)
			write(1, ": ", 2);
	}
}

void	is_printable(unsigned char c)
{
	// 출력가능한 문자 출력
	if (c >=32 && c <= 126)
		write(1, &c, 1);
	// 출력불가능한 문자
	else
		write(1, ".", 1);
}

void	ft_print_hex(unsigned char c)
{
	is_printable("0123456789abcdef"[c / 16]);
	is_printable("0123456789abcdef"[c % 16]);
}

void	ft_print_second(char *str, int size)
{
	unsigned int idx;

	idx = 0;
	while (idx < 16)
	{
		if (idx % 2 == 0)
			write(1, " ", 1);

		if (idx < size)
			ft_print_hex(str[idx]);
		idx++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int		idx;
	char				*s;

	s = (char *)addr;
	while (size > 0)
	{
		idx = 0;
		ft_print_first((unsigned int)s, 0);
		ft_print_second(s, size);
		// thrid part
		write(1, " ", 1);
		while (idx < 16 && idx < size)//16자출력 or 막줄 나머지글자만큼출력
		{
			is_printable(s[idx]);
			idx++;
		}
		write(1, "\n", 1);
		s = s + idx;
		size -= idx;
	}
	return (addr);
}

int		main(void)
{
	ft_print_memory("Bonjour les aminches\t\n\tc  est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\t\t\n\tlol.lol\n \0",92);
}