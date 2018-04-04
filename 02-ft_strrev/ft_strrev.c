/*
#include <stdio.h>

char		vaina[] = "0123456789";
*/

int			ft_strlen(char *str)
{
	int		i;
	
	i = 0;
	while(str[i])
		i++;
	return (i);
}

char		*ft_strrev(char *str)
{
	char	temp;
	int		len;
	int		i;

	i = -1;
	len = (ft_strlen(str) / 2);
	while (str[++i] && i < len)
	{
		temp = str[i];
		str[i] = str[(ft_strlen(str) - i) - 1];
		str[(ft_strlen(str) - i) - 1] = temp;
	}
	return (str);
}

/*
int			main(void)
{
	printf("|%s|\n", vaina);
	printf("|%s|\n", ft_strrev(vaina));
}
*/
