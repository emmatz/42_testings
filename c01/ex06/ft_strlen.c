
int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0' && str[i] != '\n')
	{
		i++;
	}
	return (i);
}
