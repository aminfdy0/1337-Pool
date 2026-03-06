int	ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

char    *ft_strrev(char *str)
{
    int len = ft_strlen(str);
    int i = 0;
    while (i < len)
    {
        char temp = str[i];
        str[i] = str[len - 1];
        str[len - 1] = temp;
        i++;
        len--;
    }
    str[i+i] = "\0";
    return str;
}