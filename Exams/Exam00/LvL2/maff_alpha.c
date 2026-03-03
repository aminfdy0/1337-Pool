#include <unistd.h>
int main(void)
{
    char first = 'a';
    char last = 'z';
    while (first <= last)
    {
        if (((first - 97) % 2 == 0))
        {
            write(1, &first, 1);
        }
        else
        {
            char up = first - 32;
            write(1, &up, 1);
        }
        first++;
    }
    write(1, "\n", 1);
    return 0;
}