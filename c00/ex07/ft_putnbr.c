
#include <unistd.h>

void ft_putnbr(int nb);
int digits(int a);

int digits(int a)
{
    int i;
    int tmp;
    i = 0; 
    
    do {
        tmp = a / 10;
        a = tmp;
        i++;

    } while (tmp != 0);
    return i;
}

void ft_putnbr(int nb)
{
    int length;
    char x[2];
    length = digits(nb);
    x[0] = '0' + length;
    write(1, x, 1);

}
