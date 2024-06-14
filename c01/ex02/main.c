#include <stdio.h>

void  ft_swap(int *a, int *b);

int main()
{
  int a = 5, b = 10, *pa, *pb;
  pa = &a;
  pb = &b;
  printf("Before swap\nA: %d | B: %d\n", a, b);
  ft_swap(pa,pb);
  printf("Before swap\nA: %d | B: %d\n", a, b);
  return 0;
}
