/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 14:43:42 by gshim             #+#    #+#             */
/*   Updated: 2021/04/08 15:35:43 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int number;

	number = ft_atoi_base(nbr, base_from);
	if (number == -1)
		return (0);
	number = ft_atoi_base(nbr, base_from);

}