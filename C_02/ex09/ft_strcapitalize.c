/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapalazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:27:44 by sapalazz          #+#    #+#             */
/*   Updated: 2022/07/19 19:15:03 by sapalazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_control(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

char	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}

char	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int		x;

	x = 1;
	str[0] = ft_toupper(str[0]);
	while (str[x] != '\0')
	{
		if (!ft_control(str[x - 1]) && ft_control(str[x]))
		{
			str[x] = ft_toupper(str[x]);
		}
		else
		{
			str[x] = ft_tolower(str[x]);
		}
		x++;
	}
	return (str);
}
/*
int	main(void)
{
	char	string[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	str[] = "Hola soy sarupi y ESToy en cUarenta y dos";
	printf("Antes de esto, era así: %s\n", string);
	ft_strcapitalize(string);
	printf("Después, era así: %s\n", string);
}
*/
