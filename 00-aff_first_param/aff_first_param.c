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

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr("\n");
		return (0);
	}
	else
	{
		ft_putstr(argv[1]);
		ft_putstr("\n");
		return (0);
	}
}
