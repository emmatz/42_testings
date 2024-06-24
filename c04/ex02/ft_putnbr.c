
#include <unistd.h>
void	shown(int a)
{
	char	n[10];
	int		i;

	i = 0;
	while (a)
	{
		n[i] = '0' + (a % 10);
		a /= 10;
		i++;
	}
	while (i)
	{
		write(1, &n[--i], 1);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == (2147483648 * - 1))
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb == 0)
		write(1, "0", 1);
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
		shown(nb);
	}
	else
		shown(nb);
}

void	ft_putnbr(int nb);
void  shown(int a);
int main()
{
	write(1, "Number [-2147483648]: ", 22);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);

	write(1, "Number [-3456]: ", 16);
	ft_putnbr(-3456);
	write(1, "\n", 1);

	write(1, "Number [10]: ", 13);
	ft_putnbr(10);
	write(1, "\n", 1);

	write(1, "Number [-3456407]: ", 19);
	ft_putnbr(-3456407);
	write(1, "\n", 1);

	write(1, "Number [42]: ", 13);
	ft_putnbr(42);
	write(1, "\n", 1);

	write(1, "Number [2147483650]: ", 21);
	ft_putnbr(2147483650);
	write(1, "\n", 1);

	write(1, "Number [2147483647]: ", 21);
	ft_putnbr(2147483647);
	write(1, "\n", 1);

	write(1, "Number [0]: ", 12);
	ft_putnbr(0);
	write(1, "\n", 1);

}
