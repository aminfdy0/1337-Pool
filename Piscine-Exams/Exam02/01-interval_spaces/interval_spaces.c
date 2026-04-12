#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		while (av[1][i])
		{
			write(1, &av[1][i], 1);
			if(i != ft_strlen(av[1]) - 1)
				write(1, "   ", 3);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}