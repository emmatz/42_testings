
#include <unistd.h>

void ft_print_comb2(void);

void  aux(int i, int j);

void ft_print_comb2(void)
{
  int i;
  int j;

  i = 0;
  while (i <= 98)
  {
    j = i + 1;
    while (j <= 99)
    {
      aux(i, j);
      j++;
    }
    i++;
  }
}

void  aux(int i, int j)
{
  char b[7];

  b[0] = '0' + (i / 10);
  b[1] = '0' + (i % 10);
  b[2] = ' ';
  b[3] = '0' + (j / 10);
  b[4] = '0' + (j % 10);
  if ( i == 98 && j == 99)
  {
    write(1, b, 5);
  }
  else
  {
    b[5] = ',';
    b[6] = ' ';
    write(1, b, 7);
  }
}
