#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*tmp;

	if (!(tmp = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	while (size--)
		tmp[size] = 0;
	return (tmp);
}
