#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	unsigned int	res;

	res = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
		sign = (*(str++) == '-') ? (-1) : (1);
	if (*str == '+' || *str == '-')
		return (0);
	while (ft_isdigit(*str))
		res = res * 10 + (int)(*(str++)) - '0';
	return (sign * res);
}
