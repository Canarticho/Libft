/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 08:24:40 by chle-van          #+#    #+#             */
/*   Updated: 2017/03/30 09:36:11 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  ft_value(char c, int base)
{
	char    b[16];
	int     i;

	i = 0;
	ft_strcpy(b, "0123456789abcdef");
	while (i < base && b[i] != c)
		i++;
	return (i);
}

char	*ft_lltoa(int32_t ll, char *buffer, int base)
{
	int		i;
	char	str[32 * 8 + 1];
	int		neg;
	char	tmp;

	neg = 0;
	ft_bzero(str, 20);
	i = 0;
	while (n / base)
	{
		str[i++] = n % base + '0';
		n = n / base;
		if (n < 0)
		{
			n = -n;
			neg = 1;
		}
	}
	if (neg == 1)
		str[i++] = '-';
	str[i] = '\0';
	return (ft_strcpy(buffer, ft_strrev(str)))
}
