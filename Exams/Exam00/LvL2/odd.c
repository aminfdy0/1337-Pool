#include <unistd.h>
int main(void)
{
    write(1, "13579", 5);
    write(1, "\n", 1);
    return 0;
}