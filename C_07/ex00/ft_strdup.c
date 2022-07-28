/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapalazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:46:15 by sapalazz          #+#    #+#             */
/*   Updated: 2022/07/27 14:42:27 by sapalazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x] != 0)
		x++;
	return (x);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		aux;

	aux = 0;
	str = (char *)malloc(ft_strlen(src) + 1);
	while (src[aux] != '\0')
	{
		str[aux] = src[aux];
		aux++;
	}
	str[aux] = 0;
	return (str);
}
/*
int	main(void)
{
	char	*str;
	char	*cpy;

	str = "Hola, Sarita";
	cpy = ft_strdup(str);
	printf("La copia de: %s, es: %s", str, cpy);
}
*/
