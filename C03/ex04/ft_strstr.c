/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdycoding <aminefdy@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 16:16:35 by fdycoding         #+#    #+#             */
/*   Updated: 2026/03/06 16:21:10 by fdycoding        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // for printf & NULL

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (to_find[j] && str[i + j] == to_find[j] && str[i + j])
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (NULL); // NULL or 0 Don't Give The Shit
}
/*
int main(void) 
{
    char *string1 = "AMIN";
    char *string2 = "FEDAYEE";
    printf("%s", ft_strstr(string1, string2));
}
*/
