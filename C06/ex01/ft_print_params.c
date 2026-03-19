/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdycoding <aminefdy@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 15:02:05 by fdycoding         #+#    #+#             */
/*   Updated: 2026/03/19 15:21:06 by fdycoding        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char *av[])
{
	int	i;

	i = 1;
	if (ac > 2)
	{
		while (i < ac)
		{
			ft_putstr(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
}
