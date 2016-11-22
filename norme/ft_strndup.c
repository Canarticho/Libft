/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 01:30:52 by chle-van          #+#    #+#             */
/*   Updated: 2016/11/19 01:33:22 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char *tmp;

	if (!(tmp = malloc(sizeof(char) * ft_strlen((char *)s) + 1)))
		return (NULL);
	tmp = ft_strncpy(tmp, s, n);
	return (tmp);
}
