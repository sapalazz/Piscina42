/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapalazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:43:22 by sapalazz          #+#    #+#             */
/*   Updated: 2022/07/27 18:07:28 by sapalazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_params(char *argv)
{
	int	x;

	x = 0;
	while (argv[x] != '\0')
		ft_putchar(argv[x++]);
	ft_putchar('\n');
}

int	main(int argc, char *argv[])
{
	int	x;

	x = argc;
	while (--argc)
	{
		ft_print_params(argv[--x]);
	}
	return (0);
}
