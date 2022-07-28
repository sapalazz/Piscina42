/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapalazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:08:41 by sapalazz          #+#    #+#             */
/*   Updated: 2022/07/27 14:51:43 by sapalazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

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

int	ft_find_next_prime(int nb)
{
	while (nb < INT_MAX && !ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
int	main(void)
{
	int	num;

	num = 0;
	printf("El prime siguiente a %i, es: %i", num, ft_find_next_prime(num));
}
*/
