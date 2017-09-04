/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 02:55:04 by chle-van          #+#    #+#             */
/*   Updated: 2017/09/04 18:38:04 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int32_t n, char *buffer, int base)
{
	int		i;
	char	str[4 * 8 + 2];
	int		neg;
	int32_t	tmp;

	tmp = 0;
	neg = 0;
	ft_bzero(str, 4 * 8 + 2);
	i = 0;
	if (n < 0)
		neg = 1;
	while (n / base)
	{
		tmp = (n % base > 0) ? (n % base) : (-n % base);
		str[i++] = (tmp >= 10) ? (tmp - 10 + 'a') : (tmp + '0');
		n = n / 10;
	}
	if (neg)
		n = -n;
	tmp = n;
	str[i++] = (tmp >= 10) ? (tmp - 10 + 'a') : (tmp + '0');
	if (neg == 1)
		str[i++] = '-';
	str[i] = '\0';
	return (ft_strcpy(buffer, ft_strrev(str)));
}
