
#include <stdio.h>
char	*ft_strcat(char *dest, char *src);
int main()
{
	char	s[] = "World";
	char	d[] = "Hello ";

	printf("%s\n", ft_strcat(d,s));
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
