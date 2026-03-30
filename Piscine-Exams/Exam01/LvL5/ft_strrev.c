char    *ft_strrev(char *str)
{
    int i = 0;
    int j = 0;
    while (str[i])
        i++;
    i--;
    while (i >= j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i--;
        j++;
    }
    return str;
}