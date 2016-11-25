/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 04:38:17 by chle-van          #+#    #+#             */
/*   Updated: 2016/11/25 06:54:55 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	if (!s)
		return (NULL);
	j = ft_strlen(s);
	while (ft_isspace(s[i]) && s[i])
		i++;
	while ((ft_isspace(s[j - 1] && j > i)))
		j--;
	if (!(str = ft_strnew(j - i)))
		return (NULL);
	ft_strlcpy(str, &s[i], j - i);
	return (str);
}
