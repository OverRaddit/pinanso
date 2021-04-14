/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 21:43:19 by gshim             #+#    #+#             */
/*   Updated: 2021/04/14 21:43:19 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VALIDATE_H
# define FT_VALIDATE_H
# include "struct.h"
int check_map_info(char *buf, t_map *map);
int	len(char *buf);
int check_validate(char *buf, t_map *map);

#endif
