/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapalazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:02:27 by sapalazz          #+#    #+#             */
/*   Updated: 2022/07/20 20:21:42 by sapalazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	x;

	x = 0;
	while (str[x])
	{
		x++;
	}
	return (x);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	y = 0;
	while (dest[x] && x < size)
	{
		x++;
	}
	y = x;
	while (src[x - y] && (x + 1) < size)
	{
		dest[x] = src[x - y];
		x++;
	}
	if (y < size)
	{
		dest[x] = '\0';
	}
	return (y + ft_strlen(src));
}
/*
int main(void)
{
    char    dest[100] = "En 42, quedamos 20 chicas y 120 chicos";
    char    src[100] = ", está siendo todo muy difícil y divertido";
    int x;

    x = 50;
    ft_strlcat(dest, src, x);
    printf("%s", dest);
}
*/
