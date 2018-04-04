int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (1);
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (0);
}

/*
int main(void)
{
	printf("pendejada = %d\n", ft_strcmp("pendejada", "pendejada"));
	printf("pendejada = %d\n", ft_strcmp("", "pendejada"));
}
*/
