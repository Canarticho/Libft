/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcsndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 11:59:22 by chle-van          #+#    #+#             */
/*   Updated: 2017/10/20 16:43:33 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

wchar_t	*ft_wcsndup(wchar_t *src, size_t size)
{
	wchar_t	*dst;

	if (!(dst = ft_wcsnew(size)))
		return (NULL);
	ft_wcsncpy(dst, src, size);
	return (dst);
}
