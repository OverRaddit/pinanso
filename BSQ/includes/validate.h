/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 21:43:19 by gshim             #+#    #+#             */
/*   Updated: 2021/04/15 10:27:22 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VALIDATE_H
# define FT_VALIDATE_H
# include "struct.h"
# include <stdlib.h>
int     check_map_info(char *buf, t_map *map);
int	    len(char *buf);
int     check_validate(char *buf, t_map *map);
char	*ft_strcpy(char *dest, char *src);

#endif
