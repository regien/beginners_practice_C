#include <unistd.h>

void		ft_putchar(int c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int		i;
	
	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

int			check(char *str, int e)
{
	int		i;
	
	i = -1;
	while (++i < e)
		if (str[i] == str[e])
			return (0);
	return (1);
}

int			is_here(char a, char *pen)
{
	int		i;

	i = -1;
	while(pen[++i])
		if (a == pen[i])
			return (1);
	return (0);
}

void		print_pendejada(char *str, char *pen)
{
	int		e;

	e = -1;
	while (str[++e])
		if (check(str, e) == 1 && is_here(str[e], pen))
			ft_putchar(str[e]);
}

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	else
	{
		print_pendejada(argv[1], argv[2]);
		ft_putchar('\n');
	}
	return (0);
}
