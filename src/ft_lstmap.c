/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 01:38:39 by chle-van          #+#    #+#             */
/*   Updated: 2016/11/25 06:45:34 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *tmp;
	t_list *list;

	if (!(list = malloc(sizeof(t_list))) && !lst && !(f))
		return (NULL);
	tmp = list;
	ft_lstadd(&tmp, f(lst));
	tmp->next = NULL;
	while (lst->next)
	{
		tmp = tmp->next;
		ft_lstadd(&tmp, f(lst));
		lst = lst->next;
	}
	return (list);
}
