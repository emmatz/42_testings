int	ft_iterative_factorial(int nb)
{
	int t;
	int f;

	t = 1;
	f = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (t <= nb)
	{
		f *= t;
		t++;
	}
	return (f);
}

#include <stdio.h>
int main()
{
	int b;

	printf("Number : ");
	scanf("%d", &b);
	printf("Number!: %d\n", ft_iterative_factorial(b));
}
