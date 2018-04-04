#include <unistd.h>
#include <stdlib.h>
#define WS(I) str[I] != ' ' && str[I] != '\t' && str[I] != '\n' && str[I] != '\0'
#define WSEQ(I) (str[I] == ' ' || str[I] == '\t' || str[I] == '\n') && (str[I] != '\0')

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

void		ft_putstr_mod(char *str)
{
	int		i;
	
	i = -1;
	while (str[++i])
	{
		while (WSEQ(i))
			i++;
		while (WS(i))
			ft_putchar(str[i++]);
		break ;
	}
}

int			word_count(char *str)
{
	int		i;
	int		pendejada;

	pendejada = 0;
	i = 0;
	while (str[i])
	{
		while (WSEQ(i))
			i++;
		if (WS(i))
			pendejada++;
		while (WS(i))
			i++;
	}
	return (pendejada);
}

int			*get_spots(char *str, int wc)
{
	int		i;
	int		e;
	int		*spots;

	i = 0;
	e = -1;
	if (!(spots = malloc(sizeof(spots) * wc)))
		return (0);
	while (str[i])
	{
		while (WSEQ(i))
			i++;
		if (WS(i))
			spots[++e] = i;
		while (WS(i))
			i++;
	}
	return (spots);
}



void		print_pendejada(char *str)
{
	int		first;
	int		i;
	int		wc;
	int		*spots;


	first = -1;
	i = 0;
	wc = word_count(str);
	spots = get_spots(str, wc);
	if (wc == 1)
	{
		ft_putstr_mod(str);
		return ;
	}
	else
	{
		while (++i < wc)
		{
			if (++first != 0)
				ft_putchar(' ');
			ft_putstr_mod(str + spots[i]);
		}
		ft_putchar(' ');
		ft_putstr_mod(str + spots[0]);
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
		print_pendejada(argv[1]);
		ft_putchar('\n');
	}
	return (0);
}
