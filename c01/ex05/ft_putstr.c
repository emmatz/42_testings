
#include <unistd.h>

void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	int   length_str;
  
	length_str = 0;
	while(str[length_str] != '\0' && str[length_str] != '\n')
  {
		length_str++;
  }

	write(1, str, length_str +1);
}
