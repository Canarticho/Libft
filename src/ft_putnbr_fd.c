#include "libft.h"

void	ft_putnbr_fd(int c, int fd)
{
	if (c == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (c < 0)
	{
		c = -c;
		ft_putchar_fd('-', fd);
	}
	if (c >= 10)
	{
		ft_putnbr_fd(c / 10, fd);
		ft_putnbr_fd(c % 10, fd);
	}
	else
		ft_putchar_fd(c + '0', fd);
}
