
#include <stdio.h>

void	ft_ft(int *nbr);

int main()
{
  int *p;
  int i;

  i = 13;
  p = &i;
  ft_ft(p);
  printf("Value: %d\n", *p);
  return 0;
}
