
#include <unistd.h>

void ft_putchar(char c, int l)
{
    write(1, &c, l);
}
