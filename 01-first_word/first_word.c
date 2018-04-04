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

void		ft_putstrmod(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		while ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') && str[i] != '\0')
			i++;
		while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i] != '\0')
		{
			ft_putchar(str[i]);
			i++;
		}
		break ;
	}
}


int main(int ac, char **av)
{
	if (ac != 2)
		ft_putchar('\n');
	else
	{
			ft_putstrmod(av[1]);
			ft_putchar('\n');
	}
	return (0);
}
