#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;
	
	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

int		pendejada(char *str, char *stra)
{
	int i;
	int e;

	e = 0;
	i = -1;
	while (str[e] && stra[++i])
	{
		if (str[e] == stra[i])
			e++;
		if (str[e] == '\0' && e != 0)
			return (1);
	}
	return (0);
}


int		main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putstr("\n");
		return (0);
	}
	else
	{
		if (pendejada(argv[1], argv[2]) == 1)
			ft_putstr("1");
		else
			ft_putstr("0");
	}
	ft_putchar('\n');
	return (0);
}
