#include <stdio.h>
#include "libft.h"

static int	ft_value(char c, int base)
{
	char	b[16] = "0123456789abcdef";
	int	i = 0;

	while (i < base && b[i] != c)
		i++;
	return (i);
}

int			ft_atoi_base(const char *str, int base)
{
	int		pos;
	unsigned int	res;

	res = 0;
	pos = 1;
	if(base > 16)
		return (0);
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
		pos = (*(str++) == '-') ? (-1) : (1);
	if (*str == '+' || *str == '-')
		return (0);
	while (ft_strchr("0123456789abcdef", *str) && *str)
		res = res * base + ft_value(*(str++), base);
	return (pos * res);
}
