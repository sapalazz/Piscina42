/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapalazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:28:38 by sapalazz          #+#    #+#             */
/*   Updated: 2022/07/19 19:13:54 by sapalazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	x;
	int	ret;

	x = 0;
	ret = 1;
	while (str[x] != 0)
	{
		if (str[x] < 48 || str[x] > 57)
		{
			ret = 0;
		}
		x++;
	}
	return (ret);
}
/*
int	main(void)
{
	int	k;

	k = ft_str_is_numeric("");
	printf("%i", k);
}
*/
