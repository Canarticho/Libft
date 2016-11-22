/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 23:20:26 by chle-van          #+#    #+#             */
/*   Updated: 2016/11/17 00:51:21 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	int i;

	i = -1;
	while (len-- && *src)
		*dest = *src;
	while (len--)
		*(dest++) = '\0';
	return (dest);
}
