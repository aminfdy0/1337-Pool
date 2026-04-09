// ! for if they are a lot of arg
#include <unistd.h>
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

int is_char_in_first_string(char c, char *str)
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

int main(int ac, char **av)
{
	if (ac >= 2)
	{
		int j = 1;
		int comp = 1;
		while(j <= ac - 1)
		{
			int i = 0;
			while (av[j][i] && j == 1)
			{
				if (is_char_repeated(i, av[j][i], av[j]) == 0)
					write(1, &av[j][i], 1);
				i++;
			}
			if(j == 1)
				j++;
			write(1, "  ", 2);
			i = 0;
			while (av[j][i] && j <= ac - 1)
			{
				if (is_char_repeated(i, av[j][i], av[j]) == 0 
				&& is_char_in_first_string(av[j][i], av[comp]) == 0)
					write(1, &av[j][i], 1);
				i++;				
			}
			comp++;
			j++;
			write(1, "  ", 2);
		}	
	}	
	write(1, "\n", 1);
}