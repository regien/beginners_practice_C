#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;
	
	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

int		main(void)
{
	ft_putstr("Hello World!\n");
}
