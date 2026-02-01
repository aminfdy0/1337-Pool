/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdycoding <aminefdy@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:39:14 by fdycoding         #+#    #+#             */
/*   Updated: 2026/01/29 15:55:28 by fdycoding        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	start;
	char	end;

	start = 'a';
	end = 'z';
	while (end >= start)
	{
		write(1, &end, 1);
		end--;
	}
}
/*
int   main(void)
{
        ft_print_reverse_alphabet();
}
*/
