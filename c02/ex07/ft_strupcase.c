
#include <stdio.h>
char  *ft_strupcase(char *str);

int main()
{
  char s1[] = "Hola";
  char s2[] = "xmle";
  char s3[] = "miNE";
  char s4[] = "/oP/";
  char s5[] = ".MIn";

  printf("Hola: %s\n", ft_strupcase(s1));
  printf("xmle: %s\n", ft_strupcase(s2));
  printf("miNE: %s\n", ft_strupcase(s3));
  printf("/oP/: %s\n", ft_strupcase(s4));
  printf(".MIn: %s\n", ft_strupcase(s5));
  return 0;
}

char  *ft_strupcase(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    if (str[i] >= 'a' && str[i] <= 'z')
      str[i] = str[i] - 32;
    i++;
  }
  return (str);
}
