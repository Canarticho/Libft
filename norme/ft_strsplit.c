/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 01:21:36 by chle-van          #+#    #+#             */
/*   Updated: 2016/11/22 03:58:45 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(const char *s, char c)
{
	int		i;
	char	**tab;
	char	**tmp;
	int		wn;

	wn = ft_countn(s, c);
	i = 0;
	if (!(tmp = (char**)malloc(sizeof(char*) * wn + 1)))
		return (NULL);
	tab = tmp;
	while (s[++i])
	{
		while (s[i] == c)
			s++;
		if (s[i] != c)
		{
			while (s[i] != c)
				i++;
			*tmp++ = ft_strndup(s, i);
			s = s + i;
			i = 0;
		}
	}
	return (tab);
}
