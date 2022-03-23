#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*tmp;
	int		size;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1;
	if (!(tmp = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	ft_strlcat(ft_strcpy(tmp, s1), s2, size);
	return (tmp);
}
