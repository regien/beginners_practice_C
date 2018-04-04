#include <stdio.h>
#include <stdlib.h>

void	solver(char *str, char *second)
{
	int		va1;
	int		va2;
	int		i;
	int		hold;

	hold = 0;
	i = 1;
	va1 = atoi(str);
	va2 = atoi(second);
	if (va1 <= 0 || va2 <= 0)
	{
		printf("0\n");
		return ;
	}
	while (va1 >= i && va2 >= i)
	{
		if (va1 % i == 0 && va2 % i == 0)
			hold = i;
		i++;
	}
	printf("%d\n", hold);
}

int main(int argc, char **argv)
{
	if (argc != 3)
		printf("\n");
	else
		solver(argv[1], argv[2]);
	return (0);
}
