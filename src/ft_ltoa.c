#include "libft.h"

char	*ft_ltoa(int64_t l, char *buffer, int base)
{
	int		i;
	char	str[8 * 8 + 2];
	int64_t	tmp;

	ft_bzero(str, 8 * 8 + 2);
	i = 0;
	tmp = 0;
	while (l / base)
	{
		tmp = (l % base > 0) ? (l % base) : -(l % base);
		str[i++] = (tmp >= 10) ? (tmp - 10 + 'a') : (tmp + '0');
		l = l / base;
	}
	tmp = (l % base > 0) ? (l % base) : (-l % base);
	str[i++] = (l % base >= 10) ? (tmp - 10 + 'a') : (tmp + '0');
	if (l < 0)
		str[i++] = '-';
	str[i] = '\0';
	return (ft_strcpy(buffer, ft_strrev(str)));
}
