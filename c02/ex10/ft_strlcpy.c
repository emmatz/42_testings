
#include <stdio.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int main()
{
	char	*a = "Hello";
	char	b[3];

	printf("Res: %d\n", ft_strlcpy(b, a, 2));
	return 0;
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	if (size != 0)
	{
		while ((src[j] != '\0') && (j < (size - 1)))
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}
	return	(i);
}
