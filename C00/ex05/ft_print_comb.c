/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdycoding <aminefdy@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 16:34:44 by fdycoding         #+#    #+#             */
/*   Updated: 2026/01/29 16:49:24 by fdycoding        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	one;
	char	two;
	char	theree;

	one = '0';
	while (one <= '7')
	{
		two = one + 1;
		while (two <= '8')
		{
			theree = two + 1;
			while (theree <= '9')
			{
				ft_putchar(one);
				ft_putchar(two);
				ft_putchar(theree);
				if (one != '7')
					write(1, " ,", 2);
				theree++;
			}
			two++;
		}
		one++;
	}
}
/*
int main(void)
{
	ft_print_comb();
}
*/
