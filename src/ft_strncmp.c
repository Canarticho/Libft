/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 02:29:57 by chle-van          #+#    #+#             */
/*   Updated: 2016/11/25 01:42:43 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	while (*s1 && *s2 && *(unsigned char *)(s1) == *(unsigned char *)(s2)
		&& len)
	{
		s1++;
		s2++;
		len--;
	}
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}
