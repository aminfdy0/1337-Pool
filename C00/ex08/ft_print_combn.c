/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fpcn.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdycoding <aminefdy@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:49:50 by fdycoding         #+#    #+#             */
/*   Updated: 2026/02/01 16:06:47 by fdycoding        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_array(char v[], int size, int last)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_putchar(v[i]);
		i++;
	}
	if (v[0] != last)
		write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	char	comb[10];
	char	max[10];
	int		flag;
	int		base;
	int		i;

	i = 0;
	while (i < n)
	{
		comb[i] = i + 48;
		max[i] = (10 - n) + i + 48;
		i++;
	}
	print_array(comb, n, max[0]);
	while (comb[0] != max[0])
	{
		flag = n - 1;
		while (comb[flag] == max[flag])
			--flag;
		base = ++(comb[flag]);
		while (flag < n - 1)
			comb[flag++] = base++;
		print_array(comb, n, max[0]);
	}
}
/*
int	main(void)
{
	ft_print_combn(1);
	printf("\n\n");
	ft_print_combn(5);
	printf("\n\n");
	ft_print_combn(9);
}
*/