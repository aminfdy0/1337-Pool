#include <unistd.h>

void    ft_putchar(char fdy)
{
    write(1, &fdy, 1);
}