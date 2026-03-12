/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdycoding <aminefdy@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 16:27:51 by fdycoding         #+#    #+#             */
/*   Updated: 2026/03/12 16:34:20 by fdycoding        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	base_is_valid(char *base)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = ft_strlen(base);
	if (len == 0 || len == 1)
		return (1);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (1);
		i++;
	}
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (j < ft_strlen(base) && base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
}

void	convert_to_base(char *base, int base_len, long nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	base_len = ft_strlen(base);
	if (nb >= base_len)
		convert_to_base(base, base_len, nb / base_len);
	ft_putchar(base[nb % base_len]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (base_is_valid(base) == 1)
		return ;
	convert_to_base(base, base_len, (long)nbr);
}
/*
int	main(void)
{
	ft_putnbr_base(42, "01");
  return 0;
}
*/
