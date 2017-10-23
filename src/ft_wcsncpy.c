/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcsncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 23:20:26 by chle-van          #+#    #+#             */
/*   Updated: 2017/10/20 12:18:57 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

wchar_t	*ft_wcsncpy(wchar_t *dest, const wchar_t *src, size_t len)
{
	size_t i;

	i = 0;
	while (i < len && src[i])
	{
		dest[i] = (wchar_t)src[i];
		i++;
	}
	while (i < len)
		(dest[i++]) = '\0';
	return (dest);
}
