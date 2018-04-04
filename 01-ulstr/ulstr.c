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

void		print(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			ft_putchar(str[i] - 32);
		else if (str[i] >= 'A' && str[i] <= 'Z')
			ft_putchar(str[i] + 32);
		else
			ft_putchar(str[i]);
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putstr("\n");
		return (0);
	}
	else
	{
		print(argv[1]);
		ft_putchar('\n');
		return (0);
	}
}
