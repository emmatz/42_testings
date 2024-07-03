int	ft_sqrt(int nb)
{
	int	i;
	i = 0;
	if (nb < 0)
		return (0);
	while (i < nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

#include <stdio.h>
int main()
{
	int a;
	printf("[0] if Square Root is irrational\n");
	printf("Number: ");
	scanf("%d", &a);
	printf("Square: %d\n", ft_sqrt(a));
}
