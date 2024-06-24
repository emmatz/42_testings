
#include <unistd.h>

void	convert(int nbr, char *base, int size)
{
	char	i;
	int		n;

	if (nbr < 0)
	{
		write(1, "-", 1);
		n = nbr * (-1);
	}
	else
		n = nbr;
	if (n >= size)
		convert(n / size, base, size);
	i = base[n % size];
	write(1, &i, 1);
}

int	valid_base(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1])
			return (1);
		i++;
	}
	if (i <= 1)
		return (1);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	s;

	s = 0;
	if (valid_base(base) == 0)
	{
		while (base[s])
			s++;
		convert(nbr, base, s);
	}
}


int main()
{
    int nbr = 3;
    char bin[] = "01";
    char oct[] = "01234567";
    char oct1[] = "poneyvif";
    char dec[] = "0123456789";
    char hex[] = "0123456789ABCDEF";

    write(1, "Binary: ", 8);
    ft_putnbr_base(nbr, bin);
    write(1, "\n", 1);

    write(1, "Octal: ", 7);
    ft_putnbr_base(nbr, oct);
    write(1, "\n", 1);

    write(1, "Octal: ", 7);
    ft_putnbr_base(nbr, oct1);
    write(1, "\n", 1);

    write(1, "Decimal: ", 9);
    ft_putnbr_base(nbr, dec);
    write(1, "\n", 1);

    write(1, "Hexadecimal: ", 13);
    ft_putnbr_base(nbr, hex);
    write(1, "\n", 1);
}
