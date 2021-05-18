/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 13:00:01 by gshim             #+#    #+#             */
/*   Updated: 2021/05/18 20:50:46 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

// 할당실패시 -1 을 반환해야 하는데 아직 완벽하게 처리하지 못한듯!

int	handle_newline(char **retfd, char **line, char buf[BUFFER_SIZE], int newline)
{
	char	*temp;

	// 개행 전 처리
	buf[newline] = '\0';
	temp = ft_strjoin(*line, buf);
	free(*line);
	*line = temp;
	// 개행 뒤 처리 - 여기서 ret[fd]를 retfd로 받아와서 문제가 생길까 걱정됨..
	*retfd = ft_strdup(buf + newline + 1);
	temp = ft_strjoin(temp, buf + newline + 1);
	return (1);
}

int get_next_line(int fd, char **line)
{
	static char	*ret[MAX_FD + 1];
	char		buf[BUFFER_SIZE];
	char		*temp;
	size_t			newline;
	int			readsize;

	ret[fd] = ft_strdup("");
	*line = ft_strdup("");
	// 한줄 가져오기(반복) -> 개행이 없다면 계속 가져온다, EOF미발생시 계속 가져온다.
	while((readsize = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		// buf에 개행이 들어오는 경우
		if((newline = ft_strchr(buf)) != (size_t)-1)
			return(handle_newline(&ret[fd], line, buf, newline));
		//line에 내용을 덧붙이기 + 이전할당 메모리 해제
		temp = ft_strjoin(ret[fd], buf);
		free(ret[fd]);
		//ret[fd] = 0; 이녀석을 할까말까 고민중...
		ret[fd] = temp;
	}
	if(readsize == -1)
		return (-1);
	// EOF를 만났거나 읽기 실패한 경우 실행되는 part
	// EOF전까지 ret[fd]에 덧붙이기
	temp = ft_strjoin(*line, ret[fd]);
	free(ret[fd]);
	free(*line);
	*line = temp;
	return (0);
}
