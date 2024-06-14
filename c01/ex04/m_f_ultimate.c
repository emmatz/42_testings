#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main()
{
	int x = 5, y = 10;

	printf("Before: X: %d, Y: %d\n", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("After: X: %d, Y: %d\n", x, y);
	return 0;
}
