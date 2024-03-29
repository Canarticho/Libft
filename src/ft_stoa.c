#include "libft.h"

char	*ft_stoa(int16_t s, char *buffer, int base)
{
	int16_t	i;
	char	str[2 * 8 + 2];
	int		tmp;

	ft_bzero(str, 2 * 8 + 2);
	i = 0;
	tmp = 0;
	while (s / base)
	{
		tmp = (s % base > 0) ? (s % base) : -(s % base);
		str[i++] = (tmp >= 10) ? (tmp - 10 + 'a') : (tmp + '0');
		s = s / base;
	}
	tmp = (s % base > 0) ? (s % base) : (-s % base);
	str[i++] = (s % base >= 10) ? (tmp - 10 + 'a') : (tmp + '0');
	if (s < 0)
		str[i++] = '-';
	str[i] = '\0';
	return (ft_strcpy(buffer, ft_strrev(str)));
}
