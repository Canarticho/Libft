char	*ft_strchr(const char *s, int c)
{
	while (*s || (char)c == *s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
