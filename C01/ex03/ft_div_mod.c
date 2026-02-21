/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdycoding <aminefdy@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 14:38:16 by fdycoding         #+#    #+#             */
/*   Updated: 2026/02/21 15:02:57 by fdycoding        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main()
{
    int a = 13;
    int b = 37;

    int div;
    int mod;

    ft_div_mod(a, b, &div, &mod);
    printf("div: %i | mod: %i", div, mod);
}
*/