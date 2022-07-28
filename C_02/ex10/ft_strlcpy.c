/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapalazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:29:32 by sapalazz          #+#    #+#             */
/*   Updated: 2022/07/19 19:15:16 by sapalazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_length(char *str)
{
	unsigned int	x;

	x = 0;
	while (str[x] != 0)
	{
		x++;
	}
	return (x);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	x;

	if (size == 0)
	{
		return (ft_length(src));
	}
	x = 0;
	while (src[x] != 0 && x < (size - 1))
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = 0;
	return (ft_length(src));
}
/*
int	main(void)
{
	char	str[] = "Hola, viajero";
	char	strDestino[] = "";

	printf("%s\n", strDestino);
}
*/
