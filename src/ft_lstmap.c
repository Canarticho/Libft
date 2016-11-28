/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 01:38:39 by chle-van          #+#    #+#             */
/*   Updated: 2016/11/28 08:28:09 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *list;

	list = f(lst);
	if (lst->next)
	{
		ft_lstadd(&list, ft_lstmap((lst->next), f));
		return (list);
	}
	else
		return (NULL);
}
