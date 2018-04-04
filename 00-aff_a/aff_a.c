/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalpart <gmalpart@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 20:14:54 by gmalpart          #+#    #+#             */
/*   Updated: 2018/01/30 07:36:12 by gmalpart         ###   ########.fr       */
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

int		check(char *str)
{
	int i;
	
	i = -1;
	while(str[i])
		if (str[i] == 'a')
			return (1);
	return (0);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putstr("a\n");
		return (0);
	}
	else
	{
		if (check(argv[1]) == 1)
			ft_putstr("a\n");
		else
			ft_putstr("\n");
		return (0);
	}
}
