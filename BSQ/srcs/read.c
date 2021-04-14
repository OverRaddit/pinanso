/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 13:13:40 by gshim             #+#    #+#             */
/*   Updated: 2021/04/14 13:13:40 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read.h"
#include <stdio.h>
char	*extend(char *buf)
{
	char	*ret;
	int		i;

	if(!(ret = (char *)malloc(sizeof(buf) + MAX_BUF)))
		return (0);
	i = -1;
	while(buf[++i] == '\0')
		ret[i] = buf[i];
	ret[i] = '\0';
	free(buf);
	return (ret);
}

char	*read_file(char *filename)
{
	int		fd;
	int		bufsize;
	char	*buf;
	printf("read file start\n");
	// 파일을 open 한다
	if(!(fd = open(filename, O_RDONLY)))
		return (0);
	printf("open\n");
	// 데이터를 불러올 버퍼를 준비한다.
	buf = (char *)malloc(sizeof(char) * MAX_BUF);
	printf("malloc\n");
	// open한 파일을 문자단위로 read 한다.
	bufsize = 0;
	while(read(fd, &buf[bufsize], 1))
	{
		printf("READING %d\n",bufsize);
		if(bufsize == MAX_BUF - 1)
			if(!(buf = extend(buf)))
				return (0);
		bufsize++;
	}
	buf[bufsize] = 0;
	return (buf);
}
