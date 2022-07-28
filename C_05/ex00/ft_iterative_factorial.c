/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapalazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:51:53 by sapalazz          #+#    #+#             */
/*   Updated: 2022/07/27 14:43:25 by sapalazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fac;

	fac = 1;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	else
	{
		while (nb > 0)
		{
			fac *= nb--;
		}
		return (fac);
	}
}
/*
int	main(void)
{
	int	num;
	int	fac;

	num = 5;
	fac = ft_iterative_factorial(num);
	printf("El factorial de %i es: %i", num, fac);
}
*/
