/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapalazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:10:44 by sapalazz          #+#    #+#             */
/*   Updated: 2022/07/19 19:13:43 by sapalazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	x;
	int	ret;

	x = 0;
	ret = 1;
	while (str[x] != 0)
	{
		if (str[x] < 65 || (str[x] > 90 && str[x] < 97) || str[x] > 122)
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
	int	ret;

	ret = ft_str_is_alpha("");
	printf("%i", ret); 
}
*/
