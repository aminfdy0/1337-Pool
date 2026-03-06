/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdycoding <aminefdy@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 14:19:57 by fdycoding         #+#    #+#             */
/*   Updated: 2026/03/06 14:21:03 by fdycoding        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n - 1) && (s1[i] && s2[i]) && (s1[i] == s2[i]))
		i++;
	if (n == 0)
		return (0);
	else
		return (s1[i] - s2[i]);
}
/*
int main(void)
{
    char    test0[] = "FDY";
    char    test1[] = "CODING";
    printf("%i", ft_strncmp(test0, test1, 3));
}
*/