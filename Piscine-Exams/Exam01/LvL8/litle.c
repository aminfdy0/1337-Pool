// ! its for all arg 
#include <unistd.h>
int main(int ac, char **av)
{
	if (ac > 1)
	{
		int j = 1;
		while(j <= ac - 1)
		{
			int i = 0;
			int check = 1;
			while (av[j][i])
			{
				while(av[j][i] == ' ' || av[j][i] == '\t')
				{
					i++;
					check = 1;
				}
				if (((av[j][i] >= 'a' && av[j][i] <= 'z') || (av[j][i] >= 'A' && av[j][i] <= 'Z')) && (check == 1))
				{
					if((av[j][i] >= 'a' && av[j][i] <= 'z'))
						av[j][i] -= 32;
					check = 0;
				}
				i++;
			}
			write(1, av[j], i);
			if(j != ac - 1)
				write(1, " ", 1);
			j++;
		}
	}
	write(1, "\n", 1);
}