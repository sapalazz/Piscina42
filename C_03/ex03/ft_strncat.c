/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapalazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:03:28 by sapalazz          #+#    #+#             */
/*   Updated: 2022/07/27 14:49:40 by sapalazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	y = 0;
	while (dest[x])
	{
		x++;
	}
	while ((y < nb) && src[y])
	{
		dest[x + y] = src[y];
		y++;
	}
	dest[x + y] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[100] = "En 42, quedamos 20 chicas y 120 chicos";
	char	src[100] = ", está siendo todo muy difícil y divertido";
	int	x;

	x = 50;
	ft_strncat(dest, src, x);
	printf("%s", dest);
}
*/
