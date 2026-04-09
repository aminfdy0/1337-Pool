#include <unistd.h>

int is_palindrome(char *str)
{
	int len = 0;
	int i = 0;
	while(str[len])
		len++;
	len--;
	while(i < len)
	{
		if (str[i] == str[len])
		{
			i++;
			len--;
		}
		else
			return 0;
	}
	return 1;
}

void ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		if (is_palindrome(av[1]) == 1)
			ft_putstr(av[1]);
		else
		{
			write(1, "\n", 1);
			return 0;
		}
	}
	write(1, "\n", 1);
	return 0;
}