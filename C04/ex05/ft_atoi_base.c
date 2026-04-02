/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdycoding <aminefdy@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 12:36:08 by fdycoding         #+#    #+#             */
/*   Updated: 2026/04/01 14:40:03 by fdycoding        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	get_value(char c, char *base)
{
	int i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
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

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int sign;
	int result;
	int value;
	int base_len;

	i = 0;
	sign = 1;
	result = 0;

	if (!base_is_valid(base))
		return (0);
	base_len = ft_strlen(base);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	value = get_value(str[i], base);
	while (value != -1)
	{
		result = result * base_len + value;
		i++;
		value = get_value(str[i], base);
	}
	return (result * sign);
}