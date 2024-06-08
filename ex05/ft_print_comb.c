
#include <unistd.h>

void ft_print_comb(void);

void ft_print_comb(void)
{
	char buff[5];
	int i = 0, j = 0, k = 0;

	while (i <= 9)
	{
		j = i + 1;
		while (j <= 9)
		{
			k = j + 1;
			while (k <= 9)
			{
				buff[0] = '0' + i;
				buff[1] = '0' + j;
				buff[2] = '0' + k;

				//if (buff[0] != '7' && buff[1] != '8' && buff[2] != '9')
				//if (buff[0] != 55 && buff[1] != 56 && buff[2] != 57)
				if (buff[0] != 55 || buff[1] != 56 || buff[2] != 57)
				{
					buff[3] = ',';
					buff[4] = ' ';
				}

                write(1, &buff, 5);
				k++;
			}
			j++;
		}
		i++;
	}
}

int main()
{
	ft_print_comb();
	return 0;
}
