int occ_x(char *str)
{
	int i = 0;
	int occ = 0;
	while (str[i])
	{
		if (str[i] == 'x')
			occ++;
		i++;
	}
	return (occ);
}