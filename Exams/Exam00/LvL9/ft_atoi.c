int	ft_atoi(char *str)
{
	int i = 0;
	int sign = 0;
	int nb = 0;
	while (str[i] >= 9 && str[i] <= 13 || str[i] == ' ')
		str[i]++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign++;
		str[i]++;
	}
	while (str[i] >= '0' && str[i] >= '9')
	{
		nb = nb * 10;
		nb = nb + str[i] - 48;
		str[i]++;
	}
	if (!(sign % 2))
		return nb;
	return -nb;
}