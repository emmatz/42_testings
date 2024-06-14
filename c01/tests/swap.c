
#include <stdio.h>

//void  ft_swap(int *a, int *b);

void  ft_swap(int a, int b)

//int main(int a, int b)
{
  int tmp;
//  a = 7;
//  b = 4;
  
  printf("Fa: %d\nFb: %d\n", a, b);

  tmp = a;
  a = b;
  b = tmp;
  
  printf("Sa: %d\nSb: %d\n", a, b);
//  return 0;
}


int main()
{
  int i, j;

  i = 8;
  j = 5;

  printf("FMa: %d\nFMb: %d\n", i, j);
  ft_swap(i, j);

  printf("SMa: %d\nSMb: %d\n", i, j);
  return 0;
}

