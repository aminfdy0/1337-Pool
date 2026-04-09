#include <unistd.h>

int is_char_in_second_string(char c, char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return 1;
		i++;
	}
	return 0;
}

int is_char_repeated(int index, char c, char *str)
{
	int i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return 1;
		i++;
	}
	return 0;
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int i = 0;
		while (av[1][i])
		{
			if ((is_char_in_second_string(av[1][i], av[2]) == 1) && !(is_char_repeated(i, av[1][i], av[1]) == 1))
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}