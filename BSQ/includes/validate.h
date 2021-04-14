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

int check_map_info(char *buf, t_map *map);
int	len(char *buf);
void check_validate(char *buf);
# include "struct.h"

#endif
