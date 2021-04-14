/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 13:13:57 by gshim             #+#    #+#             */
/*   Updated: 2021/04/14 13:13:57 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#define MAX_BUF 1024
void bsq(char *filename)
{
	int		fd;
	char	*buf;
	int		bufsize;
	int		i;

	// 파일을 open 한다
	if(!(fd = open(filename, O_RDONLY)))
		return ;

	// 데이터를 불러올 버퍼를 준비한다.
	buf = (char *)malloc(sizeof(char) * MAX_BUF);

	// open한 파일을 문자단위로 read 한다.
	bufsize = 0;
	while(read(fd, &buf[bufsize], 1))
	{
		if(bufsize == MAX_BUF - 1)
			buf = extend(buf, bufsize);
		bufsize++;
	}
	buf[bufsize] = 0;

	// 유효한 지도인지 판단한다.
	check_validate(buf);

	// read한 파일을 2차원 배열의 형태로 저장한다.



	// read한 파일을 출력한다.
	for(int i=0;i<)
}

int	main(int argc, char *argv[])
{
	int i;

	i = 1;
	while(i < argc)
		bsq(argv[i]);
	return (0);
}