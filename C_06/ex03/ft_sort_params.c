/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapalazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:03:06 by sapalazz          #+#    #+#             */
/*   Updated: 2022/07/27 19:11:57 by sapalazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *str, char *str2)
{
	while (*str == *str2)
	{
		str++;
		str2++;
	}
	return ((unsigned char)*str - (unsigned char)*str2);
}

void	ft_print_param(char *argv)
{
	int	x;

	x = 0;
	while (argv[x] != '\0')
		ft_putchar(argv[x++]);
	ft_putchar('\n');
}

int	main(int argc, char *argv[])
{
	int		x;
	int		y;
	char	*aux;

	x = 0;
	while (++x < argc - 1)
	{
		y = x;
		while (++y < argc)
		{
			if (ft_strcmp(argv[x], argv[y]) > 0)
			{
				aux = argv[x];
				argv[x] = argv[y];
				argv[y] = aux;
			}
		}
	}
	x = 0;
	while (++x < argc)
	{
		ft_print_param(argv[x]);
	}
	return (0);
}
