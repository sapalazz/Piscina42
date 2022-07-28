/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapalazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:45:01 by sapalazz          #+#    #+#             */
/*   Updated: 2022/07/19 20:56:57 by sapalazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{	
	int	x;
	int	ret;

	x = 0;
	ret = 1;
	while (str[x] != 0)
	{
		if (!(str[x] >= 32 && str[x] <= 127))
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

	res = ft_str_is_printable("\t");
	printf("%i", res);
}
*/
