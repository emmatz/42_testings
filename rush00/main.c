#include <stdlib.h>
#include <unistd.h>

void rush(int i, int j);

int main(int argc, char **argv)
{ 
    int i;
    int j;

    if(argc < 3)
        write(1, "Missing [column] [row] values.\n", 31);
    else if (argc > 3)
        write(1, "Expected only 2 arguments ([column] [row]).\n", 45);
    else
     {
        i = atoi(argv[1]);
        j = atoi(argv[2]);
        rush(i, j);
    }
    return 0;
}
