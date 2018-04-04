#include <stdlib.h>
#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}


char		*ft_strdup(char *src)
{
	char *temp;
	int i;

	i = 0;
	temp = malloc(sizeof(char) * ft_strlen(src) + 1);
	while (i < ft_strlen(src))
	{
		temp[i] = src[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
