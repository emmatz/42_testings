#include <stdio.h>
int ft_str_is_uppercase(char *str);

int main()
{
	printf("Expected 1: %d\n", ft_str_is_uppercase("CF"));
	printf("Expected 0: %d\n", ft_str_is_uppercase("CF-ASDF-ASDF"));
	printf("Expected 0: %d\n", ft_str_is_uppercase("HiZoeF with space"));
	printf("Expected 1: %d\n", ft_str_is_uppercase(""));
	printf("Expected 0: %d\n", ft_str_is_uppercase("HiZoeFwith&space"));
	printf("Expected 1: %d\n", ft_str_is_uppercase("ASKDLJFSFUIWEFKJ"));
	return 0;
}

int	ft_str_is_uppercase(char *str)
{
	int	i;	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
