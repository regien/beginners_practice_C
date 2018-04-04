#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		do_shit(char *s1, char *s2)
{
	int i;
	int d;

	d = 0;
	i = 0;
	if (!s1 | !s2)
		return (0);
	else
	{
		while(s1[i] && s2[d])
		{
			while (s1[i] != s2[d] && s2[d])
				d++;
			if (s1[i] == s2[d])
			{
				i++;
				d++;
			}
			if (s1[i] == '\0')
				return (1);
		}
	}
	return (0);
}

int main(int argc, char **argv)
{
	if(argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	else
	{
		if (do_shit(argv[1], argv[2]) == 1)
			ft_putstr(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
