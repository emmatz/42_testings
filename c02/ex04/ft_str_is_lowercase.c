#include <stdio.h>
int ft_str_is_lowercase(char *str);

int main()
{
	printf("Expected 0: %d\n", ft_str_is_lowercase("HiZoeF"));
	printf("Expected 0: %d\n", ft_str_is_lowercase("HiZoeF with space"));
	printf("Expected 1: %d\n", ft_str_is_lowercase(""));
	printf("Expected 0: %d\n", ft_str_is_lowercase("HiZoeFwith&space"));
	printf("Expected 1: %d\n", ft_str_is_lowercase("asdfasuklhu"));
	return 0;
}

int	ft_str_is_lowercase(char *str)
{
	int	i;	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
