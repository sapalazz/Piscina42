/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapalazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:31:04 by sapalazz          #+#    #+#             */
/*   Updated: 2022/07/20 20:21:31 by sapalazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	y;

	x = 0;
	if (*to_find == '\0')
	{
		return (str);
	}
	while (*(str + x))
	{
		y = 0;
		while (to_find[y] == str[x + y])
		{
			if (to_find[y + 1] == '\0')
			{
				return (str + x);
			}
			y++;
		}
		x++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*str;
	char	*busq;

	str = "En este ejercicio, hay 42 tipos distintos de errores";
	busq = ft_strstr(str, "42");
	if (busq)
	{
		printf("¡Lo encontraste!");
		printf("\nLo que buscabas está en: %s", busq);
	}
	else 
	{
		printf("No se ha encontrado, vaya.");
	}
}
*/
