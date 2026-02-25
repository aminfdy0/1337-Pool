/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdycoding <aminefdy@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 14:59:58 by fdycoding         #+#    #+#             */
/*   Updated: 2026/02/25 15:03:50 by fdycoding        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
int main(void)
{
	int	size = 5;
	int	tab[] = {45, 30, 14, 5, -1};
	// Bubble Sort | O(n^2) 
    ft_sort_int_tab(tab, size);
	for (int i = 0; i < size; i++)
	{
		printf("%i ", tab[i]);
	}
}
*/