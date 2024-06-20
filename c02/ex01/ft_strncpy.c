
#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int	main()
{
	char	*or = "hello this are the first comments";
	char	ds[100];

	printf("SRC   : %s\n", or);
	printf("DST 05: %s\n", ft_strncpy(ds, or, 5));
	printf("DST 08: %s\n", ft_strncpy(ds, or, 8));
	printf("DST 40: %s\n", ft_strncpy(ds, or, 40));
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return	(dest);
}
