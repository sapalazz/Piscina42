/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  func_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapalazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:19:35 by sapalazz          #+#    #+#             */
/*   Updated: 2022/07/25 10:48:44 by sapalazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_post_to_find(int x, int y, char *str)
{
	while (str[x + y + 1] == ' ' || str[x + y + 1] == ':')
	{
		if (str[x + y + 1] == ':')
		{
			x++;
			while (str[x + y + 1] == ' ')
				x++;
			while (str[x + y + 1] != '\n')
			{
				if (!(str[x + y + 1] == '\\'))
					ft_putchar(str[x + y + 1]);
				x++;
			}
		}
		x++;
	}
}

void	ft_str_search_print(char *str, char *to_find)
{
	int	x;
	int	y;

	x = 0;
	while (*(str + x))
	{
		y = 0;
		while (to_find[y] == str[x + y])
		{
			if (to_find[y + 1] == '\0')
			{
				ft_post_to_find(x, y, str);
			}
			y++;
		}
		x++;
	}	
}

void	ft_read_dict(char *nb)
{
	int		fd;
	char	led[1023];

	fd = open ("numbers.dict", O_RDONLY);
	read(fd, led, 1023);
	ft_str_search_print(led, nb);
}

void	ft_read_alt_dict(char *nb, char *alt_dict)
{
	int		fd;
	char	led[1023];

	fd = open(alt_dict, O_RDONLY);
	read(fd, led, 1023);
	ft_str_search_print(led, nb);
}

int	main(void)
{
	ft_read_dict("1000000");
}
