#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (n < 3 && !(s1 || s2))
		return (0);
	while (n--)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1++;
		s2++;
	}
	return (0);
}
