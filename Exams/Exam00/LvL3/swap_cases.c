int str_length(char *str)
{
    int  i = 0;
    while (str[i])
    {
        i++;
    }
    return i;
}

char *swap_cases(char *str)
{
    int length = str_length(str);
    int i = 0;
    while (i < length / 2)
    {
        char temp;
        temp = str[i];
        str[i] = str[length - 1];
        str[length - 1] = temp;
        length--;
        i++;
    }
    return str;
}