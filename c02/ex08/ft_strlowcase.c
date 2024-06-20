
#include <stdio.h>

char *ft_strlowcase(char *str);
int main()
{
	char	f[] = "maNI";
	char	g[] = "NO.PI/32tgIP";
	char	j[] = "HELLO ALL OF YOU!";
	printf("maNI: %s\n", ft_strlowcase(f));
	printf("NO.PI/32tgIP: %s\n", ft_strlowcase(g));
	printf("HELLO ALL OF YOU!: %s\n", ft_strlowcase(j));
	return 0;
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
