/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapalazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:36:36 by sapalazz          #+#    #+#             */
/*   Updated: 2022/07/27 14:50:41 by sapalazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	aux;

	aux = 0;
	if (index > 1)
	{
		aux = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (aux);
	}
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (-1);
}
/*
int	main(void)
{
	int	index;
	int	aux;

	aux = 0;
	index = 25;
	printf("El fibonacci del número %i son: ", index);
	while (aux++ < index)
		printf("%i ", ft_fibonacci(aux));
	return (0);
}
*/
