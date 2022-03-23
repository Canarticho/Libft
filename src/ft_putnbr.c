#include "libft.h"

void	ft_putnbr(int c)
{
	if (c == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (c < 0)
	{
		c = -c;
		ft_putchar('-');
	}
	if (c >= 10)
	{
		ft_putnbr(c / 10);
		ft_putchar(c % 10 + '0');
	}
	else
		ft_putchar(c + '0');
}
