/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalpart <gmalpart@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 02:37:21 by gmalpart          #+#    #+#             */
/*   Updated: 2017/11/07 02:50:53 by gmalpart         ###   ########.fr       */
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

void	rotone(char *str)
{
	int i;
	i = 0;
	while (str[i])
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			ft_putchar((((str[i] - 'A') + 1)% 26) + 'A');
		else if (str[i] <= 'z' && str[i] >= 'a')
			ft_putchar((((str[i] - 'a') + 1)% 26) + 'a');
		else
			ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
		ft_putstr("\n");
	else
		rotone(argv[1]);
	return (0);
}
