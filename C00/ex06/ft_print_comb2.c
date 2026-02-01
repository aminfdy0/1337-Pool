/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdycoding <aminefdy@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 17:06:32 by fdycoding         #+#    #+#             */
/*   Updated: 2026/01/29 17:22:07 by fdycoding        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(int x, int y)
{
	ft_putchar((x / 10) + '0');
	ft_putchar((x % 10) + '0');
	ft_putchar(' ');
	ft_putchar((y / 10) + '0');
	ft_putchar((y % 10) + '0');
	if (x < 98)
		write(1, " ,", 2);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_print_numbers(x, y);
			y++;
		}
		x++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}
*/
