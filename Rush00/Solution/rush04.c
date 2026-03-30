#include <unistd.h>

void    ft_putchar(char fdy);

void    ft_main(int chars, int nb, char cZero, char cOne, char cTwo)
{
    ft_putchar(cOne);
    while (nb <= chars - 2)
    {
        write(1, &cZero, 1);
        nb++;
    }
    if (chars > 1)
        ft_putchar(cTwo);
}

void    rush(int chars, int lines)
{
    int i;
    int j;

    i = 1;
    while (i <= lines && chars > 0 && lines > 0)
    {
        j = 1;
        if (i == 1)
            ft_main(chars, j, 'B', 'A', 'C');
        else if (i == lines)
            ft_main(chars, j, 'B', 'C', 'A');
        else
            ft_main(chars, j, ' ', 'B', 'B');
        ft_putchar('\n');
        i++; 
    }
}