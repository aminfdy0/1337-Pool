#include <unistd.h>

int is_char_in_second_str(char c, char *str,int *j)
{
	while (str[*j])
	{
		if (str[*j] == c)
		{
			(*j)++;
			return 1;
		}
		(*j)++;
	}
	return 0;
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int check = 0;
		int i = 0;
		int j = 0;
		while (av[1][i])
		{
			if (is_char_in_second_str(av[1][i], av[2], &j) == 1)
			{
				check = 1;
				j = j;
			}
			else
			{
				write(1, "\n", 1);
				return 0;
			}
			i++;
		}
		if(check == 1)
			write(1, av[1], i);
		else
		{
			write(1, "\n", 1);
			return 0;
		}
	}
	write(1, "\n", 1);
}