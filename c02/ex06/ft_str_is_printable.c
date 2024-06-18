#include <stdio.h>

int ft_str_is_printable(char *str);

int main()
{
  char *test = "test\r";
  printf("Expected 0: %d\n", ft_str_is_printable(test));
  printf("Expected 1: %d\n", ft_str_is_printable(""));
  printf("Expected 1: %d\n", ft_str_is_printable("as87#$$"));
  printf("Expected 0: %d\n", ft_str_is_printable("\n"));
  printf("Expected 0: %d\n", ft_str_is_printable("\t"));
  printf("Expected 0: %d\n", ft_str_is_printable("\b"));
  printf("Expected 1: %d\n", ft_str_is_printable("Loauieh./"));
  printf("Expected 0: %d\n", ft_str_is_printable("Loauieh./\r"));
  return 0;
}

int ft_str_is_printable(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    if (32 <= str[i] && str[i] <= 126)
      i++;
    else
      return (0);
  }
  return (1);
}
