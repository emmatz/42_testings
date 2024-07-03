#include <unistd.h>
int	main(int args, char **argsv)
{
	while (args > 0 && *argsv[0])
	{
		write(1, &*argsv[0], 1);
		argsv[0]++;
	}
	write(1, "\n", 1);
	return (0);
}
