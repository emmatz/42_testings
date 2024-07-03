int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

#include <stdio.h>
int main()
{
        int a, b;
        printf("Number and power: ");
        scanf("%d %d", &a, &b);
        printf("Number!: %d\n", ft_recursive_power(a,b));
}

