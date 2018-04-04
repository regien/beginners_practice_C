#include <unistd.h>

void		ft_putchar(int c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

int main(int ac, char **av)
{
	if (ac < 2)
		ft_putchar('\n');
	else
	{
		ft_putstr(av[ac - 1]);
		ft_putchar('\n');
	}
	return (0);
}
