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

int			check_brackets(char a)
{
	if (a == '(')
		return (2);
	else if (a == ')')
		return (-2);
	else if (a == '[')
		return (3);
	else if (a == ']')
		return (-3);
	else if (a == '{')
		return (4);
	else if (a == '}')
		return (-4);
	else
		return (0);
}

void		brackets(char *str)
{
	int i;
	float res;

	i = 0;
	res = 1.00;
	while (str[i])
	{
		if (check_brackets(str[i]) > 0)
			res = (res * 10) + check_brackets(str[i]);
		else if (check_brackets(str[i]) < 0)
			res = (res + check_brackets(str[i])) / 10;
		if (res < 0)
			break ;
		i++;
	}
	if (res == 1.00)
		ft_putstr("OK");
	else
		ft_putstr("Error");
}




int main(int ac, char **av)
{
	if (ac < 2)
		ft_putchar('\n');
	else
	{
		int i;
		i = 1;
		while (i < ac)
		{
		brackets(av[i]);
		ft_putchar('\n');
		i++;
		}
	}
	return (0);
}
