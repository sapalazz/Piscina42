/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapalazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:58:29 by sapalazz          #+#    #+#             */
/*   Updated: 2022/07/19 19:14:05 by sapalazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	x;
	int	ret;

	x = 0;
	ret = 1;
	while (str[x] != 0)
	{
		if (!(str[x] >= 'a' && str[x] <= 'z'))
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

	res = ft_str_is_lowercase("09");
	printf("%i", res);
}
*/
