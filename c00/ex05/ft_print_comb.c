
#include <unistd.h>

void    ft_print_comb(void);

void    ft_print_comb(void)
{
	char    buf[5];
	buf[0] = '0';
	buf[3] = ',';
	buf[4] = ' ';
	while (buf[0] <= '7')
	{
		buf[1] = buf[0] + 1;
		while (buf[1] <= '8')
		{
			buf[2] = buf[1] + 1;
			while (buf[2] <= '9')
			{
                if (buf[0] == '7' && buf[1] == '8' && buf[2] == '9')
                {
                    buf[3] = '\0';
                write(1, buf, 4);
                }
                else
                write(1, buf, 5);
				buf[2]++;
			}
			buf[1]++;
		}
		buf[0]++;
	}
}
