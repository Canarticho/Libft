/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 01:00:46 by chle-van          #+#    #+#             */
/*   Updated: 2016/11/22 06:29:03 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
	{
		while ((*alst)->next)
	{
		ft_lstdelone(alst, del);
		*alst = (*alst)->next;
	}
	ft_lstdelone(alst, del);
}
