
#include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n);
int main()
{
	printf("V: %d\n", ft_strncmp("Hola", "Hola", 3));
 	printf("V: %d\n", ft_strncmp("ABA", "ABZ", 2));
	printf("V: %d\n", ft_strncmp("ABJ", "ABC", 3));
	printf("V: %d\n", ft_strncmp("xxxXXXf", "xxxXXXj", 4));
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	int	j;

	i = 0;
	while ((s1[i] || s2[i]) && (unsigned)i < n)
	{
		j = (unsigned)s1[i] - (unsigned)s2[i];
		i++;
	}
	return (j);
}
