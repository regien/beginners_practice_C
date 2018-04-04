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

void		ft_print(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\0')
		{
			if (str[i] == '\0')
				break ;
			i++;
		}
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
		{
			ft_putchar(str[i]);
			i++;
		}
		if (str[i] == '\0')
			break ;
		//		i++;
	}
}

void		print(char *str)
{
	int		i;
	int		cont;

	i = -1;
	cont = 0;
	while (str[++i])
	{
		if(cont != 0)
			ft_pustr("   ");

	}
}

void		stuff(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\0')
		{
			if (str[i] == '\0')
				break ;
			i++;
			if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
			{
				ft_print(str + i);
				
			}
		}
	}
}

int			main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	else
	{
		print(argv[1]);
		ft_putchar('\n');
	}
}
