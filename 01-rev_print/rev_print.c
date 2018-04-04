/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalpart <gmalpart@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 21:18:42 by gmalpart          #+#    #+#             */
/*   Updated: 2017/11/06 21:43:50 by gmalpart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i - 1);
}

void	ft_huevos(char *str)
{
	int i;

	i = ft_strlen(str);
	if (str)
	{
		while (i >= 0)
		{
			ft_putchar(str[i]);
			i--;
		}
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
		ft_putstr("\n");
	else
	{
		ft_huevos(argv[1]);
		ft_putstr("\n");
	}
	return (0);
}
