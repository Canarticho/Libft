#include "libft.h"

char	*ft_itoa(int32_t n, char *buffer, int base)
{
	int		i;
	char	str[4 * 8 + 2];
	int32_t	tmp;

	tmp = 0;
	ft_bzero(str, 4 * 8 + 2);
	i = 0;
	while (n / base)
	{
		tmp = (n % base > 0) ? (n % base) : -(n % base);
		str[i++] = (tmp >= 10) ? (tmp - 10 + 'a') : (tmp + '0');
		n = n / base;
	}
	tmp = (n % base > 0) ? (n % base) : (-n % base);
	str[i++] = (tmp >= 10) ? (tmp - 10 + 'a') : (tmp + '0');
	if (n < 0)
		str[i++] = '-';
	str[i] = '\0';
	return (ft_strcpy(buffer, ft_strrev(str)));
}
