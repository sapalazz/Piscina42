/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapalazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:53:23 by sapalazz          #+#    #+#             */
/*   Updated: 2022/07/27 15:17:49 by sapalazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		x++;
	}
	return (x);
}

void	ft_print_base(int num, int len_base, char *base)
{
	int	nb;

	if (num < 0)
	{
		ft_putchar('-');
		nb = num * -1;
	}
	else
	{
		nb = num;
	}
	if (nb >= len_base)
	{
		ft_print_base(nb / len_base, len_base, base);
	}
	ft_putchar(base[nb % len_base]);
}

int	ft_putnbr_base(int nbr, char *base)
{
	int	x;
	int	y;
	int	len;

	x = 0;
	len = ft_strlen(base);
	while (base[x] != '\0' && len > 1)
	{
		y = x + 1;
		while (base[y])
		{
			if (base[x] == base[y])
			{
				return (-1);
			}
			y++;
		}
		if (base[x] == '+' || base[x] == '-' || base[x] < 32)
			return (-1);
		x++;
	}
	ft_print_base(nbr, len, base);
	return (0);
}
int	main(void)
{
	int		nbr;
	char	*base;

	nbr = 365;
	base = "01";
	ft_putnbr_base(nbr, base);
	printf(" - Esto es en base binaria.\n");
	base = "0123456789abcdef";
	ft_putnbr_base(nbr, base);
	printf(" - Esto es en base hexadecimal.\n");
	base = "0123456789";
    ft_putnbr_base(nbr, base);
    printf(" - Esto es en base decimal.\n");
	return (0);
}
