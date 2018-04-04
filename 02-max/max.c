int			max(int *tab, unsigned int len)
{
	int temp;
	unsigned int i;

	temp = 0;
	i = -1;
	while (++i < len)
		if (temp < tab[i])
			temp = tab[i];
	return (temp);
}
