/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 04:38:17 by chle-van          #+#    #+#             */
/*   Updated: 2016/11/23 08:20:36 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	int		size;
	char	*str;

	if (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	size = ft_strlen((char*)s) - 1;
	while ((s[size] == ' ' || s[size] == '\n' || s[size] == '\t'))
		size--;
	if (!(str = malloc(size * sizeof(char) + 22)))
		return (NULL);
	ft_strncpy(str, s, size + 1);
	return (str);
}
