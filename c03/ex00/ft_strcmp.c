

#include <stdio.h>
int	ft_strcmp(char *s1, char *s2);
int main()
{
	printf("V: %d\n", ft_strcmp("Hola", "Hola"));
	printf("V: %d\n", ft_strcmp("ABA", "ABZ"));
	printf("V: %d\n", ft_strcmp("ABJ", "ABC"));
	printf("V: %d\n", ft_strcmp("\201", "A"));
}

int	ft_strcmp(char *s1, char *s2)
{
	int	x;
	int y;

	x = 0;
	while (s1[x] || s2[x])
	{
		y = (unsigned)s1[x] - (unsigned)s2[x];
		x++;
	}
	return (y);
}
