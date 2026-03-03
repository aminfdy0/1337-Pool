#include <unistd.h>
int main(void)
{
    char first = 'a';
    char last = 'z';
    while (last >= first)
    {
        if (((last - 122) % 2 == 0))
        {
            write(1, &last, 1);
        }
        else
        {
            char low = last - 32;
            write(1, &low, 1);
        }
        last--;
    }
    write(1, "\n", 1);
    return 0;
}