#include <unistd.h>
int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        while (av[1][i])
            i++;
        int len = i - 1;
        i = 0;
        while (av[1][i])
        {
            write(1, &av[1][i], 1);
            if (i != len)
                write(1, "   ", 3);
            i++;
        }
    }
    else 
        write(1, "\n", 1);
}