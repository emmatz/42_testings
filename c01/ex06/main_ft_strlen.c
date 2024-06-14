#include <stdio.h>

int ft_strlen(char *str);

int main()
{
  int l;
  char *m = "Hello, how are you?";

  l = ft_strlen(m);

  printf("Length of M: %s is %d\n", m, l);
  return 0;

}
