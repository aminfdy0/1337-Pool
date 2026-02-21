/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdycoding <aminefdy@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 15:04:14 by fdycoding         #+#    #+#             */
/*   Updated: 2026/02/21 15:27:36 by fdycoding        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	fdy;

	fdy = *a;
	*a = *a / *b;
	*b = fdy % *b;
}
/*
int main()
{
    int a = 13;
    int b = 12;
    ft_ultimate_div_mod(&a, &b);
    printf("div: %i | mod: %i", a, b);
}
*/
