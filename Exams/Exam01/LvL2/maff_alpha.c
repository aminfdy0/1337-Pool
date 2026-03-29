#include <unistd.h>
int main(void)
{
    char start = 'a';
    char end = 'z';
    while (start <= end)
    {
        if (!(start % 2 == 0))
            write(1, &start, 1);
        else
        {
            start -= 32;
            write(1, &start, 1);
             start += 32;
        }
        start++;
    }
    write(1, "\n", 1);
    return 0;
}