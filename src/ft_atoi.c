/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 03:04:47 by chle-van          #+#    #+#             */
/*   Updated: 2016/11/24 05:04:00 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int				pos;
	unsigned int	res;

	res = 0;
	while (*str == '\r' || *str == '\n' || *str == ' ' || *str == '\t'
			|| *str == '\v' || *str == '\f')
		str++;
	if (*str == '+' || *str == '-')
		pos = (*(str++) == '-') ? (-1) : (1);
	if (*str == '+' || *str == '-')
		return (0);
	while (ft_isdigit(*str))
		res = res * 10 + (int)(*(str++)) - '0';
	return (pos * res);
}
