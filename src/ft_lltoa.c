/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 08:24:40 by chle-van          #+#    #+#             */
/*   Updated: 2017/09/04 18:39:02 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_lltoa(int64_t ll, char *buffer, int base)
{
	int		i;
	char	str[8 * 8 + 2];
	int		neg;
	int64_t	tmp;

	neg = 0;
	ft_bzero(str, 8 * 8 + 2);
	i = 0;
	tmp = 0;
	if (ll < 0)
		neg = 1;
	while (ll / base)
	{
		tmp = (ll % base > 0) ? (ll % base) : (-ll % base);
		str[i++] = (tmp >= 10) ? (tmp - 10 + 'a') : (tmp + '0');
		ll = ll / base;
	}
	if(neg)
		ll = -ll;
	tmp = ll % base;
	str[i++] = (ll % base >= 10) ? (tmp - 10 + 'a') : (tmp + '0');
	if (neg == 1)
		str[i++] = '-';
	str[i] = '\0';
	return (ft_strcpy(buffer, ft_strrev(str)));
}
