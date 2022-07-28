/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapalazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 15:57:32 by sapalazz          #+#    #+#             */
/*   Updated: 2022/07/17 12:21:13 by sapalazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	cont;	

	cont = -1;
	while (++cont < size / 2)
	{
		aux = tab[cont];
		tab[cont] = tab[size - (cont + 1)];
		tab[size - (cont + 1)] = aux;
	}
}
/*
int	main(void)
{
	int tab[] = {0, 1, 2, 3, 4, 5};
	int size = 6;
	int cont;

	cont = 0;
	ft_rev_int_tab(tab, size);
	while (tab[cont] > '\0')
	{
		printf("%i ", tab[cont]);
		cont++;
	}
	return (0);
}
*/
