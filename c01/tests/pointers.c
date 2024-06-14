#include <stdio.h>

int f(int *np)
{
    
    *np = 50;

    return *np;

}


int main()
{
    int x = 1, y =2 , z[10];
    int *ip;    // ip points to int

    ip = &x;    // ip points to x (address)
    y = *ip;     // y is now 1
    *ip = 0;    // x is now 0
    ip = &z[0]; // ip now points to z[0]

    printf("X: %d, Y: %d, Z: %d\n", x, y, *z);

    y = f(&x);
    printf("NY: %d\n", y);

    return 0;
}
