
#include <unistd.h>

void	ft_putstr_non_printable(char *str);
int	main()
{
	write(1, "Original: hello\\nhow is it\\tgoing\n", 34);
	ft_putstr_non_printable("hello\nhow is it\tgoing");
	write(1, "\n", 1);
	return 0;
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~')
			write(1, &str[i], 1);
		else
		{
			write(1, "\\", 1);
			write(1, &("0123456789abcdef"[(unsigned char)str[i] / 16]), 1);
			write(1, &("0123456789abcdef"[(unsigned char)str[i] % 16]), 1);
		}
		i++;
	}
}
