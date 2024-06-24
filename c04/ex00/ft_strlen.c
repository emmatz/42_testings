int	ft_strlen(char *str)
{
	int 	i;
	i = 0;
	while (str[i])
		i++;
	return (i);
}

#include <stdio.h>
int	ft_strlen(char *str);
int main()
{
	printf("Expected  5: %d\n", ft_strlen("hello"));
	printf("Expected  6: %d\n", ft_strlen(" omg y"));
	printf("Expected  0: %d\n", ft_strlen(""));
	printf("Expected 14: %d\n", ft_strlen("don't be panic"));
}
