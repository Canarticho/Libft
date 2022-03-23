void	*ft_memset(void *s, int c, size_t n)
{
	int i;

	i = 0;
	while (n--)
		*(unsigned char *)(s + i++) = (unsigned char)c;
	return (s);
}
