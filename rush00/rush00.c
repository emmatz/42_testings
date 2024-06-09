//#include <unistd.h>
void ft_putchar(char c, int l);

void rush(int w, int h)
{
    // if w=0 or h=0 print a message
    if (w <= 0 || h <= 0)
        return;
    //{
    //    write(1, "0 is not a valid size\n", 23);
    //}

    // if w=1 and h=1
    if ( w == 1 && h == 1)
    {
        //char b[2];
        //b[0] = 111; // o
        //b[1] = 10; // \n
        //write(1, &b, 2);
        ft_putchar(111, 1);
        ft_putchar(10, 1);
        return;
    }
    
    /*
    // top and bottom line
    //char line[w+1];
    //line[0] = 111;
    int i = 1;
    while (i < w - 1)
    {
        //line[i] = '-';
        ft_putchar(111, 1);
        ft_putchar(45,1);
        i++;
    }
    //line[w-1] = 111;
    //line[w] = 10;
    //write(1, &line, w + 1);
    //ft_putchar(111, 1);
    ft_putchar(10, 1);
    */
    int position = 1;
    while (w>0


            ) {
        
    }
    
}
/*
{
    ft_putchar(1, 1);
    return 0;
}*/
