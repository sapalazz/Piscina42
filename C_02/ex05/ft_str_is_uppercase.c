/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapalazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:29:34 by sapalazz          #+#    #+#             */
/*   Updated: 2022/07/19 19:14:15 by sapalazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	x;
	int	ret;

	x = 0;
	ret = 1;
	while (str[x] != 0)
	{
		if (!(str[x] >= 'A' && str[x] <= 'Z'))
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
	int	res;

	res = ft_str_is_uppercase("SARA!");
	printf("%i", res);
}
*/
