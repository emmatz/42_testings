
#include <unistd.h>

void	ft_print_numbers(void);

void  ft_print_numbers(void)
{
	char	i;

	i = 48;
	while (i < 58)
	{
		write (1, &c, 1);
		i++;
	}
}
