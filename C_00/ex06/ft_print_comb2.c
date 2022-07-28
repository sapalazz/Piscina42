/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapalazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:31:43 by sapalazz          #+#    #+#             */
/*   Updated: 2022/07/13 19:42:52 by sapalazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = -1;
	while (n1 <= 98)
	{
		n1++;
		n2 = n1;
		while (n2 < 99)
		{
			n2++;
			ft_putchar('0' + (n1 / 10));
			ft_putchar('0' + (n1 % 10));
			ft_putchar(' ');
			ft_putchar('0' + (n2 / 10));
			ft_putchar('0' + (n2 % 10));
			if (!(n1 == 98 && n2 == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
