#include <stdio.h>
int	ft_str_is_numeric(char *str);

int  main()
{
	printf("Expexted 1: %d\n", ft_str_is_numeric("12345"));
	printf("Expexted 0: %d\n", ft_str_is_numeric("123 45"));
	printf("Expexted 0: %d\n", ft_str_is_numeric("123n45"));
	printf("Expexted 0: %d\n", ft_str_is_numeric("-12345"));
	printf("Expexted 1: %d\n", ft_str_is_numeric("1234928498721361525"));
	printf("Expexted 1: %d\n", ft_str_is_numeric(""));
	return 0;
}

int	ft_str_is_numeric(char *str)
{
	int	i;	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
