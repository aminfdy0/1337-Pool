#include <unistd.h>
void	write_string(char *str)
{
    int len = 0;
    while (str[len])
        len++;
    write(1, str, len);
}