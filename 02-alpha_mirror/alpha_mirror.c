/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalpart <gmalpart@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 21:48:12 by gmalpart          #+#    #+#             */
/*   Updated: 2017/11/06 22:47:00 by gmalpart         ###   ########.fr       */
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

void	right_one(int e)
{
	int i;
	
	i = 0;
	if (e <= 'Z' && e >= 'A')
		ft_putchar('M' - (e - 'N'));
	else if (e <= 'z' && e >= 'a')
		ft_putchar('m' - (e - 'n'));
	else
		ft_putchar(e);
}

int main (int argc, char **argv)
{
	int i;
	
	i = 0;
	if (argc != 2)
		ft_putstr("\n");
	else
	{
		while(argv[1][i])
		{
			right_one(argv[1][i]);
			i++;
		}
		ft_putstr("\n");
	}
	return (0);
}
