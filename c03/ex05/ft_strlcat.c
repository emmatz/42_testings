
#include <stdio.h>
unsigned int  ft_strlcat(char *dest, char *src, unsigned int size);
int main()
{
	char	a[] = "Hello ";
	char	b[] = "C";

	printf("%d\n", ft_strlcat(a, b, sizeof(a)));
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	ds;
	unsigned int	s;
	unsigned int	i;

	ds = 0;
	s = 0;
	i = 0;
	while (dest[ds])
		ds++;
	while (src[s])
		s++;
	if (size <= ds)
		return (s + size);
	while (src[i] && (ds + i) < (size - 1))
	{
		dest[ds + i] = src[i];
		i++;
	}
	dest[ds + i] = '\0';
	return (s + ds);
}
