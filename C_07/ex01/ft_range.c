/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapalazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 19:34:56 by sapalazz          #+#    #+#             */
/*   Updated: 2022/07/27 20:14:52 by sapalazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	aux;

	aux = 0;
	if (min >= max)
		return (NULL);
	arr = (int *)malloc(sizeof(*arr) * (max - min));
	while (min < max)
	{
		arr[aux++] = min++;
	}
	return (arr);
}

int	main(void)
{
	int	x;
	int	y;
	int	aux;
	int	*arr;

	x = 0;
	y = 0;
	aux = 0;
	arr = ft_range(x, y);
	while (aux <= 0)
	{
		printf("%d", arr[aux]);
		aux++;
	}
}
