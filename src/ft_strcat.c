#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t end;
	size_t i;

	i = -1;
	end = ft_strlen(s1);
	while (s2[++i])
		(s1[end + i]) = (unsigned char)s2[i];
	s1[end + i] = '\0';
	return (s1);
}
