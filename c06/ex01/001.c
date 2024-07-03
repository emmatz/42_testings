#include <unistd.h>
int	main(int arg, char **argv)
{
	int	i;
	int	p;
	p = 1;
	if (arg > 1)
	{
		while (p < arg)
		{
			i = 0;
			while (argv[p][i])
				i++;
			write(1, argv[p], i);
			write(1, "\n", 1);
			p++;
		}
	}
	return (0);
}
