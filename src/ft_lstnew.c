/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 23:40:58 by chle-van          #+#    #+#             */
/*   Updated: 2016/11/28 04:06:07 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(const void *content, size_t content_size)
{
	char	*tmp;
	t_list	*list;

	if (!(list = malloc(sizeof(t_list))))
		return (NULL);
	if (!(tmp = ft_strndup(content, content_size)) || !content)
		tmp = NULL;
	list->content = tmp;
	list->content_size = content_size;
	list->next = NULL;
	return (list);
}
