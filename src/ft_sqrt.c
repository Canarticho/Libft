int	ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (!nb)
		return (0);
	while (!(i * i == nb) && i < 46345)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}
