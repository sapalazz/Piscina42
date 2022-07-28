/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapalazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:16:53 by sapalazz          #+#    #+#             */
/*   Updated: 2022/07/27 17:18:59 by sapalazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	ft_sqrt(int nb)
{
	int	aux;

	aux = 1;
	if (nb > 0)
	{
		while (aux * aux <= nb)
		{
			if (aux * aux == nb)
				return (aux);
			else if (aux >= 46341)
				return (0);
			aux++;
		}
	}
	return (0);
}
/*
int	main(void)
{
	int	num;

	num = INT_MAX;
	printf("La raiz cuadrada de %i, es: %i", num, ft_sqrt(num));
}
*/
