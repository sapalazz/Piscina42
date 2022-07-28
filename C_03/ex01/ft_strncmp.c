/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapalazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 21:25:30 by sapalazz          #+#    #+#             */
/*   Updated: 2022/07/25 12:05:26 by sapalazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	aux;

	if (n == 0)
	{
		return (0);
	}
	aux = 0;
	while (s1[aux] != 0 && s2[aux] != 0)
	{
		if ((s1[aux] != s2[aux]) || aux >= n - 1)
		{
			return ((unsigned char)s1[aux] - (unsigned char)s2[aux]);
		}
		aux++;
	}
	return ((unsigned char)s1[aux] - (unsigned char)s2[aux]);
}
/*
int	main(void)
{
	char	*str1;
	char	*str2;
	int		ret;

	str1 = "Hola Sarita";
	str2 = "Hola Sari";
	ret = ft_strncmp(str1, str2, 10);
	printf("%i", ret);
}
*/
