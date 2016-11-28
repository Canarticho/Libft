/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 03:17:50 by chle-van          #+#    #+#             */
/*   Updated: 2016/11/28 10:09:59 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int c, int fd)
{
	if (c == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (c < 0)
	{
		c = -c;
		ft_putchar_fd('-', fd);
	}
	else if (c >= 10)
	{
		ft_putnbr_fd(c / 10, fd);
		ft_putchar_fd(c % 10 + '0', fd);
	}
	else
		ft_putchar_fd(c + '0', fd);
}
