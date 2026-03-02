/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdycoding <aminefdy@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 17:29:06 by fdycoding         #+#    #+#             */
/*   Updated: 2026/03/02 17:38:59 by fdycoding        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	true;

	ft_strlowcase(str);
	true = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z' || str[i] >= '0'
				&& str[i] <= '9') && true == 1)
		{
			if (str[i] >= '0' && str[i] <= '9')
				true = 0;
			else
			{
				str[i] -= 32;
				true = 0;
			}
		}
		else if (str[i] >= 32 && str[i] <= 47)
			true = 1;
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char	str[] = "hi, how are you? 42words forty-two; fifty+and+one";
	printf("%s", ft_strcapitalize(str));
}
*/