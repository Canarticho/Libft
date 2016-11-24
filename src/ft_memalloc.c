/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 05:53:37 by chle-van          #+#    #+#             */
/*   Updated: 2016/11/23 04:29:06 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*tmp;

	if (!(tmp = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	while (size)
		tmp[size--] = 0;
	return (tmp);
}
