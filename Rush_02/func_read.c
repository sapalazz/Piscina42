/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapalazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 13:54:56 by sapalazz          #+#    #+#             */
/*   Updated: 2022/07/24 17:42:54 by sapalazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_post_check(int x, int y, char *str)
{
	while (str[x + y + 1] == ' ' || str[x + y + 1] == ':')
	{
		printf("Espacios");
		if (str[x + y + 1] == ':')
		{
			printf("Dos puntos");
			x++;
			while (str[x + y + 1] == ' ')
			{
				printf("Espacio");
				x++;
			}
			while (str[x + y + 1] != '\n')
			{
				return (0);
				x++;
			}
		}
		x++;
	}
	printf("Uno de aqui");
	return (1);
}

int	ft_check_nb(char *str, char *to_find)
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
				ft_post_check(x, y, str);
			y++;
		}
		x++;
	}
	return (1);
}

int	ft_read_dict(char *nb)
{
	int		fd;
	char	led[1023];

	fd = open("numbers.dict", O_RDONLY);
	read(fd, led, 1023);
	return (ft_check_nb(led, nb));
}

int	ft_read_alt_dict(char *nb, char *alt_dict)
{
	int		fd;
	char	led[1023];

	fd = open (alt_dict, O_RDONLY);
	read(fd, led, 1023);
	return (ft_check_nb(led, nb));
}

int	main(void)
{
	printf("%i", ft_read_dict("10"));
}
