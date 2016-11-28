/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 01:21:36 by chle-van          #+#    #+#             */
/*   Updated: 2016/11/28 12:16:19 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static int	ft_nbr(const char *s, char c)
{
	int		i;
	int		nb;

	i = 0;
	nb = 0;
	while (*s)
	{
		if (nb == 0 && *s != c)
		{
			nb = 1;
			i++;
		}
		else if (nb == 1 && *s == c)
			nb = 0;
		s++;
	}
	return (i);
}
*/
char	**ft_strsplit(const char *s, char c)
{
	int		i;
	char	**tab;
	char	**tmp;

	if (!s)
		return (NULL);
	if (!(tmp = (char**)malloc(sizeof(char*) * (ft_countn(s, c) + 1))))
		return (NULL);
	//	i = 0;
	tab = tmp;
	tmp[ft_countn(s, c)] = NULL;
	while (*s && tmp)
	{
		i = 0;
		while (s[i] != c && s[i])
			i++;
		if (i)
		{
			*tmp = ft_strndup(s, i);
			s = s + i;
			tmp++;
		}
		while (*s == c)
			s++;
	}
	return (tab);
}
