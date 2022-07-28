/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapalazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:05:34 by sapalazz          #+#    #+#             */
/*   Updated: 2022/07/24 16:11:38 by sapalazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_atoi(char *str)
{
	int				res;
	int				neg;
	unsigned int	x;

	res = 0;
	neg = 1;
	x = 0;
	while (str[x] == ' ' || (str[x] >= 9 && str[x] <= 13))
		x++;
	while (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			neg *= -1;
		x++;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		res = res * 10 + str[x] - '0';
		x++;
	}
	return ((int)(res * neg));
}
int	main(void)
{
	int		val;
	char	*str;

	str = "  ---+--+1234ab567";
	val = ft_atoi(str);
	printf("El string: %s, tiene un valor de: %i", str, val);
}
