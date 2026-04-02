#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	base_is_valid(char *base)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = ft_strlen(base);
	if (len == 0 || len == 1)
		return (1);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (1);
		i++;
	}
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (j < ft_strlen(base) && base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
}

void	ft_putnbr_base2(int nbr, char *base)
{
    int i = 0;
    int baseLen = 0;
    int arr[32];

    if (is_base_valid(base))
    {
        if (nbr < 0)
        {
            write(1, "-", 1);
            nbr = -nbr;
        }
        while (base[baseLen])
            baseLen++;
        while (nbr)
        {
            arr[i] = nbr % baseLen;
            nbr /= baseLen;
            i++;
        }
        while (i-- > 0)
            ft_putchar(base[arr[i]]);
    }
}