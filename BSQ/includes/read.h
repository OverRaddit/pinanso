/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 20:42:11 by gshim             #+#    #+#             */
/*   Updated: 2021/04/14 20:42:11 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_READ_H
# define FT_READ_H

# define MAX_BUF 1024
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
char	*extend(char *buf);
char	*read_file(char *filename);

#endif
