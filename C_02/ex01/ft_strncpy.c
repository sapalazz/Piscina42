/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapalazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:54:28 by sapalazz          #+#    #+#             */
/*   Updated: 2022/07/19 19:13:30 by sapalazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while (x < n && src[x] != 0)
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = 0;
		x++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "MIRA ESTO";
	ft_strncpy(str2, str1, 15);
	puts(str2);
}
*/
