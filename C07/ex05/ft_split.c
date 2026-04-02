/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdycoding <aminefdy@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 10:32:26 by fdycoding         #+#    #+#             */
/*   Updated: 2026/04/02 10:38:24 by fdycoding        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int is_char_charset(char c, char *charset)
{
    int i;

    i = 0;
    while (charset[i])
    {
        if (c == charset[i])
            return (1);
        i++;
    }
    if (c == '\0')
        return (1);
    return (0);
}

int count_words(char *str, char *charset)
{
    int i;
    int words;

    i = 0;
    words = 0;
    while (str[i])
    {
        if ((is_char_charset(str[i], charset) == 0) 
        && (is_char_charset(str[i+1], charset) == 1))
            words++;
        i++;
    }
    return (words);
}

void    write_word(char *dest, char *from, char *charset)
{
    int i;

    i = 0;
    while (is_char_charset(from[i], charset) == 0)
    {
        dest[i] = from[i];
        i++;
    }
    dest[i] = '\0';
}


void    write_split(char **split, char *str, char *charset)
{
    int i;
    int j;
    int words;

    i = 0;
    while (str[i])
    {
        if (is_char_charset(str[i], charset) == 1)
            i++;
        else
        {
            j = 0;
            while (is_char_charset(str[i+j], charset) == 0)
                j++;
            split[words] = malloc(sizeof(char) * (j + 1));
            write_split(split[words], str + i, charset);
            i += j;
            words;
        }
    }
}

char    **ft_split(char *str, char *charset)
{
    char    **split;
    int words;

    words = count_words(str, charset);
    **split = malloc(sizeof(char *) * (words + 1));
    split[words] = 0;
    write_split(split, str, charset);
    return (split);
}