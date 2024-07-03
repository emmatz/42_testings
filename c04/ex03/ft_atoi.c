
int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	n;

	i = 0;
	s = 1;
	n = 0;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (str[i] - '0') + (n * 10);
		i++;
	}
	return (n * s);
}

#include <stdio.h>
#include <stdlib.h>
int	main()
{
  char *test[] = {"   ---+--+-12345ab567",
    "--+--+-12345ab567",
    "+--++12x345ab567",
    "  ---+--+--532345ab567",
    "a45",
    "+-t12345ab567",
    "  +++---6842d1586+-34",
    "+----+--+-+12340957 34 479",
    "+----+--+-+12+340957 34 479",
    "+----+--+-+12-340957 34 479",
    "+123+343-4321"};
  int size = sizeof(test)/sizeof(test[0]);

  for (int i=0; i < size; i++)
  {
    printf("%s\n", test[i]);
    printf("   ATOI: %d\n", atoi(test[i]));
    printf("My ATOI: %d\n\n", ft_atoi(test[i]));
  }
  /*
	printf("   ---+--+-12345ab567 [+]: %d\n", ft_atoi("   ---+--+-12345ab567"));
	printf("--+--+-12345ab567     [-]: %d\n", ft_atoi("--+--+-12345ab567"));
	printf("+--++12x345ab567      [+]: %d\n", ft_atoi("+--++12x345ab567"));
	printf("	---+--+--532345ab567 [-]: %d\n", ft_atoi("	---+--+--532345ab567"));
	printf("a45                   [+]: %d\n", ft_atoi("a45"));
	printf("+-t12345ab567         [-]: %d\n", ft_atoi("+-t12345ab567"));
	printf("  +++---6842d1586+-34 [-]: %d\n", ft_atoi("  +++---6842d1586+-34"));
  */
}
