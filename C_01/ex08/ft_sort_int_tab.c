/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapalazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:44:13 by sapalazz          #+#    #+#             */
/*   Updated: 2022/07/17 12:10:09 by sapalazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	x;
	int	y;

	x = 0;
	while (x < size)
	{
		y = x + 1;
		while (y < size)
		{
			if (tab[y] <= tab[x])
			{
				aux = tab[y];
				tab[y] = tab[x];
				tab[x] = aux;
			}
			y++;
		}
		x++;
	}
}
/*
int	main(void)
{
	int	tab[10] = {1, 7, 3, 34, 33, 8, 12, 38, 42, 278};
	int	cont;

	cont = 0;
	ft_sort_int_tab(tab, 10);
	while (tab[cont] > '\0')
	{
		printf("%i ", tab[cont]);
		cont++;
	}
}
*/
