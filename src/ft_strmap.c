/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 03:11:00 by chle-van          #+#    #+#             */
/*   Updated: 2016/11/22 03:55:57 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*tmp;
	int		i;
	int		size;

	size = ft_strlen((char *)s + 1);
	i = -1;
	if (!(tmp = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	while (++i < size)
		tmp[i] = (f)((char)s[i]);
	return (tmp);
}
