/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 01:21:36 by chle-van          #+#    #+#             */
/*   Updated: 2016/11/28 05:48:09 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(const char *s, char c)
{
	int		i;
	char	**tab;
	char	**tmp;

	if (!s)
		return (NULL);
	i = 0;
	if (!(tmp = (char**)malloc(sizeof(char*) * (ft_countn(s, c)))))
		return (NULL);
	tab = tmp;
	while (*s)
	{
		while (*s == c)
			s++;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (i)
		{
			*tmp = ft_strndup(s, i);
			s = s + i;
			tmp++;
			i = 0;
		}
	}
	return (tab);
}
