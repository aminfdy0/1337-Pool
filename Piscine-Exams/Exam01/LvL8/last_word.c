#include <unistd.h>
int main(int ac, char **av)
{
    if (ac == 2)
    {
        int len = 0;
        int last = 0;
        while(av[1][len])
            len++;
        len--;
        while(av[1][len] == ' ' || (av[1][len] == '\t' && len != 0))
            len--;
        last = len;
        while(av[1][len] != ' ' && av[1][len] != '\t' && len > 0)
            len--;
		if(last > 0)
        	len++;
        while (len <= last && len >= 0 && last >= 0)
        {
            write(1, &av[1][len], 1);
            len++;
        }
    }
    write(1, "\n", 1);
}