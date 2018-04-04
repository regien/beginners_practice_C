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

void		ft_putnbr(int nbr)
{
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}

int			ft_atoi(char *str)
{
	int holder;
	int i;

	i = 0;
	holder = 0;
	while ((str[i] == '\n' || str[i] == ' ' || str[i] == '\t')  && str[i] != '\0')
		i++;
	if (str[i] == '-')
		return (0);
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		holder = (holder * 10);
		holder = holder + (str[i] - '0');
		i++;
	}
	return (holder);
}



void	print_verga(char *str)
{
	int holder;
	int i;

	i = 1;
	holder = ft_atoi(str);
	while (i < 10)
	{
		ft_putnbr(i);
		ft_putstr(" x ");
		ft_putnbr(holder);
		ft_putstr(" = ");
		ft_putnbr(holder * i);
		ft_putchar('\n');
		i++;
	}

}


int main(int ac, char **av)
{
	if (ac != 2)
		ft_putchar('\n');
	else
	{
		print_verga(av[1]);
	}
	return (0);
}
