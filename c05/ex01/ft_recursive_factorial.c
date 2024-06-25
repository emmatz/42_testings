
int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb -1));
}

#include <stdio.h>
int main()
{
        int b;

        printf("Number : ");
        scanf("%d", &b);
        printf("Number!: %d\n", ft_recursive_factorial(b));
}

