/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapalazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:48:55 by sapalazz          #+#    #+#             */
/*   Updated: 2022/07/27 14:51:36 by sapalazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i++ <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
	}
	if (nb < 2)
		return (0);
	else
		return (1);
}
/*
int	main(void)
{
	int	num;

	num = 54;
	if (ft_is_prime(num) == 0)
		printf("%i no es un numero primo", num);
	else
		printf("%i es un numero primo", num);
}
*/
