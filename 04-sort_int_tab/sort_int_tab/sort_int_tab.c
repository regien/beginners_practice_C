/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalpart <gmalpart@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 23:42:55 by gmalpart          #+#    #+#             */
/*   Updated: 2017/11/07 00:44:30 by gmalpart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int		temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;

	i = 0;
	while(i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			ft_swap(&tab[i] ,&tab[i + 1]);
			i = 0;
		}
		else
			i++;
	}
}

int main(void)
{
	int *pendejadas;
	int i;
	int b;

	b = 20;
	i = 0;
	pendejadas = malloc(sizeof(int) * 6);
	while (i < 7)
		pendejadas[i++] = b--;
	sort_int_tab(pendejadas, 7);
	i = 0;
	while (i < 7)
	{
		printf("pendejadas = %i\n", pendejadas[i]);
		i++;
	}
}
