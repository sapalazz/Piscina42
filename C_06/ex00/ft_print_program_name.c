/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapalazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 09:37:34 by sapalazz          #+#    #+#             */
/*   Updated: 2022/07/27 18:05:47 by sapalazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	x;

	x = 0;
	if (argc >= 0)
	{
		while (argv[0][x] != '\0')
		{
			ft_putchar(argv[0][x]);
			x++;
		}
		ft_putchar('\n');
	}
	return (0);
}
