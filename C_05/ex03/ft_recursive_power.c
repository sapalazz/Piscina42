/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapalazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:13:32 by sapalazz          #+#    #+#             */
/*   Updated: 2022/07/27 14:50:33 by sapalazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = nb;
	if (res > res * nb)
		return (0);
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
		res *= ft_recursive_power(nb, power - 1);
	return (res);
}
/*
int	main(void)
{
	int	nb;
	int	power;
	int	res;

	nb = 3;
	power = 3;
	res = ft_recursive_power(nb, power);
	printf("El numero %i elevando al %i, es: %i", nb, power, res);
}
*/
