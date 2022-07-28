/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapalazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:55:21 by sapalazz          #+#    #+#             */
/*   Updated: 2022/07/21 14:53:16 by sapalazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	x;
	int	ret;

	x = 0;
	ret = 1;
	while (str[x] != 0)
	{
		if (!(str[x] >= 32 && str[x] <= 127))
		{
			ret = 0;
		}
		x++;
	}
	return (ret);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hex(int num)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (num > 16)
	{
		ft_print_hex(num / 10);
		ft_print_hex(num % 10);
	}
	else
	{
		ft_putchar(hex[num]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux])
	{
		if ((str[aux] <= 31 && str[aux] >= 0) || str[aux] == 127)
		{
			ft_putchar('\\');
			if (str[aux] < 16)
			{
				ft_putchar('0');
			}
			ft_print_hex(str[aux]);
		}
		else
		{
			ft_putchar(str[aux]);
		}
		aux += 1;
	}
}
/*
int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
}
*/
