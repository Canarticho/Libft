/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 01:38:39 by chle-van          #+#    #+#             */
/*   Updated: 2016/11/22 06:10:43 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *tmp;
	t_list *list;

	if (!(tmp = malloc(sizeof(t_list))) && lst)
		return (NULL);
	tmp = f(lst);
	list = tmp;
	while (lst->next)
	{
		lst = lst->next;
		if (!(tmp = malloc(sizeof(t_list))))
			return (NULL);
		tmp = f(lst);
	}
	return (list);
}
