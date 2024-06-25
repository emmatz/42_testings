
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	r;

	i = 0;
	r = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		r *= nb;
		i++;
	}
	return (r);
}

#include <stdio.h>
int main()
{
        int a, b;

        printf("Number and power: ");
        scanf("%d %d", &a, &b);
        printf("Number!: %d\n", ft_iterative_power(a,b));
}


