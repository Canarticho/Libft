/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 05:53:37 by chle-van          #+#    #+#             */
/*   Updated: 2016/11/22 05:59:20 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*tmp;
	size_t	i;

	i = 0;
	if (!(tmp = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	while (i < size)
		tmp[i++] = 0;
	return (tmp);
}
