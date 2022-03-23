#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *tmp;

	if (!(tmp = ft_strnew(ft_strlen((char *)s))))
		return (NULL);
	tmp = ft_strcpy(tmp, s);
	return (tmp);
}
