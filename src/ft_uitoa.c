/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 02:55:04 by chle-van          #+#    #+#             */
/*   Updated: 2017/09/04 17:51:51 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_uitoa(uint32_t n, char *buffer, int base)
{
	int			i;
	char		str[4 * 8 + 2];
	int			neg;
	uint32_t	tmp;

	neg = 0;
	ft_bzero(str, 4 * 8 + 2);
	i = 0;
	tmp = 0;
	while (n / base)
	{
		tmp = n % base;
		str[i++] = (tmp >= 10) ? (tmp - 10 + 'a') : (tmp + '0');
		n = n / 10;
	}
	tmp = n % base;
	str[i++] = (tmp % base >= 10) ?(tmp - 10 + 'a') : (tmp + '0');
	if (neg == 1)
		str[i++] = '-';
	str[i] = '\0';
	return (ft_strcpy(buffer, ft_strrev(str)));
}
