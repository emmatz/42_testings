
#include <unistd.h>
void	ft_putstr(char *str)
{
	int	i;
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main()
{
	char	*a = "Hello World!";
	char	*b = "test 2";
	ft_putstr(a);
	write(1, "\n", 1);
	ft_putstr(b);
	write(1, "\n", 1);
}
