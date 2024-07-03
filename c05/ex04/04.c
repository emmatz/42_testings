int	ft_fibonacci(int index)
{
	int	fn;
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
	{
		fn = ft_fibonacci(index - 1);
		fn = fn + ft_fibonacci(index - 2);
	}
	return (fn);
}

#include <stdio.h>
int main()
{
        int a;
        printf("Number: ");
        scanf("%d", &a);
        printf("Fibona: %d\n", ft_fibonacci(a));
}

