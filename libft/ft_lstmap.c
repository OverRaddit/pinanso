/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshim <gshim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:13:32 by gshim             #+#    #+#             */
/*   Updated: 2021/05/10 21:40:07 by gshim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *start;

	if (lst == NULL)
		return (NULL);
	if (!(new = ft_lstnew(f(lst->content))))
	{
		ft_lstclear(&start, del);
		return (0);
	}
	start = new;
	while (lst->next)
	{
		if (!(new->next = ft_lstnew(f(lst->next->content))))
		{
			ft_lstclear(&start, del);
			return (0);
		}
		new = new->next;
		lst = lst->next;
	}
	return (start);
}
