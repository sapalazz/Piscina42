/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapalazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:02:29 by sapalazz          #+#    #+#             */
/*   Updated: 2022/07/27 14:43:18 by sapalazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	res = nb;
	while (power-- > 1)
		res *= nb;
	return (res);
}
/*
int	main(void)
{
	int	nb;
	int	power;
	int	res;

	nb = 0;
	power = 0;
	res = ft_iterative_power(nb, power);
	printf("El numero --%i-- elevado a --%i-- es igual a: %i", nb, power, res);
}
*/
