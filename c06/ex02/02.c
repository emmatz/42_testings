#include <unistd.h>
int	main(int arg, char **args)
{
	int	i;
	int	p;
	p = arg - 1;
	if (arg > 1)
	{
		while (p >= 1)
		{
			i = 0;
			while (args[p][i])
				i++;
			write(1, args[p--], i);
			write(1, "\n", 1);
		}
	}
	return (0);
}
