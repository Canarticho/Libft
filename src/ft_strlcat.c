/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 00:19:24 by chle-van          #+#    #+#             */
/*   Updated: 2016/11/24 08:03:45 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int end;
	int i;

	i = 0;
	end = ft_strlen((char *)dst);
	while ((i + end) < (int)(size) && src[i]) 
	{
		dst[end + i] = src[i];
		i++;
	}
	dst[end + i] = '\0';
	return (end + i);
}
