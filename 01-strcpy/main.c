/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalpart <gmalpart@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 20:39:48 by gmalpart          #+#    #+#             */
/*   Updated: 2017/11/06 20:55:07 by gmalpart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*ft_strcpy(char *dst, const char *src)
{
	int i;
	
	i = 0;
	while(src[i] || dst[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int main(void)
{
	char	*str2;
	char	*str1;
	
	str2 = malloc(sizeof(char) * 20);
	str1 = malloc(sizeof(char) * 20);
	str2 = ft_strcpy(str2, "01234567890123456789");
	ft_putstr(str2);
}
