
#include <unistd.h>

void ft_putnbr(int nb);

void ft_putnbr(int nb)
{
	long	tmp;
	char	n[10];
	int		i;

	i = 0;
	tmp = nb;
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (tmp < 0)
	{
		tmp *= -1;
		write(1, "-", 1);
	}
	while(tmp % 10)
	{
		n[i++] = (tmp % 10) + 48;
		tmp /= 10;
	}
	while( i >= 0)
		write(1, &n[--i], 1);
}
