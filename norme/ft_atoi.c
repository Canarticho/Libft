/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 03:04:47 by chle-van          #+#    #+#             */
/*   Updated: 2016/11/17 01:13:52 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	{
		pos = (*str == '-') ? (-1) : (1);
		str++;
	}
	while (*str == '+' || *str == '-')
		str++;
	while (ft_isdigit(*str))
	{
		res = res * 10 + (int)(*str);
	}
	return (pos * res);
}
