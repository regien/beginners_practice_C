#include <stdlib.h>
#include <stdio.h>

int		range(int start, int end)
{
	if (end > start)
		return ((end - start) + 1);
	else if (end == start)
		return (1);
	else
		return (start - end);
}

int		*ft_rrange(int start, int end)
{
	int		ranger;
	int		*holder;
	int		i;

	i = 0;
	ranger = range(start, end);
	holder = malloc(sizeof(int) * ranger);
	if(end > start)
		while(end >= start && i <= ranger)
		{
			holder[i] = end; 
			end--;
			i++;
		}
	else if (end == start)
		holder[0] = end;
	else
	{
		while (start >= end && i <= ranger)
		{
			holder[i] = end;
			end++;
			i++;
		}
	}
	return (holder);
}

int main(void)
{
	int 		i;
	int			*pendej;
	
	pendej = ft_rrange(2147483647, 2147483640);
	for (i = 0; i < 8; i++)
		printf("holder[%d] = |%d|\n", i, pendej[i]);
}
