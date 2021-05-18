/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 12:59:49 by gshim             #+#    #+#             */
/*   Updated: 2021/05/18 20:48:42 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS
# define GET_NEXT_LINE_BONUS
# include <stdlib.h>
# include <unistd.h>
size_t		ft_strlen(const char *str);
char		*ft_strdup(const char *src);
size_t		ft_strchr(const char *str);
char		*ft_strjoin(char const *s1, char const *s2);
# endif

# ifndef MAX_FD
# define MAX_FD 1024
# endif

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 1
# endif