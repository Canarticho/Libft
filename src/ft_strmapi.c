/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 03:11:00 by chle-van          #+#    #+#             */
/*   Updated: 2016/11/25 01:13:57 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*tmp;
	int		i;
	int		size;

	size = ft_strlen((char *)s);
	i = -1;
	if (!(tmp = malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (++i < size)
		tmp[i] = (f)(i, (char)s[i]);
	tmp[size] = '\0';
	return (tmp);
}
