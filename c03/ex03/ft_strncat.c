
#include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb);
int main()
{
	char	s[] = "World";
	char	d[] = "Hello ";

	printf("%s\n", ft_strncat(d,s, 4));
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
