/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapalazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 21:31:29 by sapalazz          #+#    #+#             */
/*   Updated: 2022/07/19 19:14:51 by sapalazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != 0)
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
		{
			str[x] = str[x] + 32;
		}
		x++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "ME gusta MUCHO 42.";
	printf("Antes de la función: %s\n", str);
	ft_strlowcase(str);
	printf("Después de la función: %s", str);
}
*/
