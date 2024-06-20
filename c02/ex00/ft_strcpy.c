#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);
int main()
{
	char	*or = "Hello";
	char	dst[9];

	printf("SRC: %s\n", or);
	printf("DST: %s\n", ft_strcpy(dst, or));
	return 0;
}


char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return	(dest);
}
