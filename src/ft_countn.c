int	ft_countwords(const char *s, char c)
{
	int wn;
	int i;

	i = 0;
	wn = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && (s[i]))
		{
			while (s[i] != c && s[i])
				i++;
			wn++;
		}
	}
	return (wn);
}
