/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 04:26:27 by chle-van          #+#    #+#             */
/*   Updated: 2016/11/24 23:21:02 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*tmp;
	int		size;

	size = ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1;
	if (!(tmp = malloc(sizeof(char) * size)))
		return (NULL);
	ft_strcpy(ft_stpcpy(tmp, s1), s2);
	tmp[size] = '\0';
	return (tmp);
}
