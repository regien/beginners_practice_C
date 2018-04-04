#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	rot13(char *str)
{
	int i;
	i = -1;
	while (str[++i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			ft_putchar((((str[i] - 'a') + 13) % 26) + 'a');
		else if (str[i] >= 'A' && str[i] <= 'Z')
			ft_putchar((((str[i] - 'A') + 13) % 26) + 'A');
		else
			ft_putchar(str[i]);
	}
}

int main(int ac, char **av)
{
	if (ac != 2)
		ft_putchar('\n');
	else
	{
		rot13(av[1]);
		ft_putchar('\n');
	}
	return (0);
}
