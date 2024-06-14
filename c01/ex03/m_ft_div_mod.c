#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main()
{
	int i, j, *pd, *pm, x, y;
	i = 150;
	j = 100;

	pd = &x;
	pm = &y;
	
	ft_div_mod(i, j, pd, pm);
	printf("num %d and %d\n", i, j);
	printf("Div: %d\nMod: %d\n", *pd, *pm);

	return 0;
}
