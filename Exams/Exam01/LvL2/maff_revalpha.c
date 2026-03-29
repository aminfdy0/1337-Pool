#include <unistd.h>
int main(void)
{
    char start = 'a';
    char end = 'z';
    while (start <= end)
    {
        if ((end % 2 == 0))
            write(1, &end, 1);
        else
        {
            end -= 32;
            write(1, &end, 1);
             end += 32;
        }
        end--;
    }
    write(1, "\n", 1);
    return 0;
}