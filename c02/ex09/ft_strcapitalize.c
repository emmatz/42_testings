
#include	<stdio.h>
char	*ft_strcapitalize(char *str);
int main()
{
	char	s[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	t[] = "  hello	Testing  1, this	Program\nhi hi2";
	char	u[] = "Testing 2, .for uZZ|";

	printf("ORIGINAL: %s\n", s);
	printf("CHANGED : %s\n", ft_strcapitalize(s));
	printf("ORIGINAL: %s\n", t);
	printf("CHANGED : %s\n", ft_strcapitalize(t));
	printf("ORIGINAL: %s\n", u);
	printf("CHANGED : %s\n", ft_strcapitalize(u));
	return 0;
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	aux;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
			aux = 1;
		else if (str[i - 1] >= '0' && str[i - 1] <= '9')
			aux = 1;
		else if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			aux = 1;
		else
			aux = 0;
		if (str[i] >= 'A' && str[i] <= 'Z' && aux == 1)
			str[i] = str[i] + 32;
		if (str[i] >= 'a' && str[i] <= 'z' && aux == 0)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
