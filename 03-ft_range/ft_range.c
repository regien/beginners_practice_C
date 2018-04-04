/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalpart <gmalpart@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 23:08:10 by gmalpart          #+#    #+#             */
/*   Updated: 2017/11/14 01:49:19 by gmalpart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		get_len(int start, int end)
{
	int i;

	i = 0;
	while(start != end)
	{
		if (start < end)
		{
			start++;
			i++;
		}
		if (end < start)
		{
			end++;
			i++;
		}
	}
	return (i);
}

int		*ft_range(int start, int end)
{
	int len;
	int *holder;
	int i;

	i = 0;
	len = get_len(start, end);
	if(!(holder = malloc(sizeof(int) * len)))
		return (0);
	while (start != end)
	{
		if (start < end)
		{
			holder[i] = start;
			i++;
			start++;
		}
		if (end < start)
		{
			holder[i] = start;
			i++;
			start--;
		}
	}
	holder[i] = start;
	return (holder);
}

int main(void)
{
	int *pendejadas;
	int i;
	
	i = -2;
	pendejadas = ft_range(10, 10);
	while(i < 19)
	{
		printf("pendejadas = %i \n", pendejadas[i]);
		i++;
	}
	return (0);
}
