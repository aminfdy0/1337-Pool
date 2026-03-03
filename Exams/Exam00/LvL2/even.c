#include <unistd.h>
int main(void)
{
    write(1, "0246810", 7);
    write(1, "\n", 1);
    return 0;
}