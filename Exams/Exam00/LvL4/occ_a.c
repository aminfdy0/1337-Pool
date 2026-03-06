//#include <stdio.h>
int occ_a(char *str)
{
    int i = 0;
    int bigA = 0;
    while (str[i])
    {
        if (str[i] == 'A')
            bigA++;
        i++;
    }
    return bigA;
}
/*
int main()
{
    printf("%i", occ_a("AMIN - FEDAYEE"));
}
*/