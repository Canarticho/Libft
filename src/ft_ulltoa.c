/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 08:24:40 by chle-van          #+#    #+#             */
/*   Updated: 2017/03/30 11:29:39 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ulltoa(uint64_t ll, char *buffer, int base)
{
	int		i;
	char	str[8 * 8+ 1];
	int		tmp;

	ft_bzero(str, 8 * 8 + 1);
	i = 0;
	while (ll / base)
	{
		str[i++] = ((tmp = ll % base) > 10) ? (tmp - 10 + 'a') : (tmp + '0');
		ll = ll / base;
	}
	str[i++] = ((tmp = ll % base) > 10) ? (tmp - 10 + 'a') : (tmp + '0');
	str[i] = '\0';
	return (ft_strcpy(buffer, ft_strrev(str)));
}
