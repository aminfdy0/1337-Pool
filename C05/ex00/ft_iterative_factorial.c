/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdycoding <aminefdy@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 15:19:29 by fdycoding         #+#    #+#             */
/*   Updated: 2026/03/14 15:20:03 by fdycoding        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fac;

	fac = 1;
	if (nb == 1 || nb == 0)
		return (1);
	while (nb > 0)
	{
		fac = fac * nb;
		nb--;
	}
	return (fac);
}
/*
int main()
{
	printf("%i\n", ft_iterative_factorial(8));
}
*/
