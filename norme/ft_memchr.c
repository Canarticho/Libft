/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 22:43:42 by chle-van          #+#    #+#             */
/*   Updated: 2016/11/22 04:00:26 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int i;

	i = 0;
	while (s && n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
	}
	return (NULL);
}
