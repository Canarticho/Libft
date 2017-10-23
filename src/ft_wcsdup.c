/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcsdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 11:59:22 by chle-van          #+#    #+#             */
/*   Updated: 2017/10/20 12:17:20 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

wchar_t	*ft_wcsdup(wchar_t *src)
{
	wchar_t	*dst;

	if (!(dst = ft_wcsnew(ft_wcslen(src))))
		return (NULL);
	ft_wcscpy(dst, src);
	return (dst);
}
