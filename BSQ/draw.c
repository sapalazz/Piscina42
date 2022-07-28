/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapalazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 10:58:15 by sapalazz          #+#    #+#             */
/*   Updated: 2022/07/25 12:05:19 by sapalazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_draw(int rows, int cols)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x++ < rows)
	{
		while (y++ < cols)
		{
			ft_putchar('*');
		}
	}
}

int	main(void)
{
	ft_draw(3, 3);
}
