
void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int ta;
	int tb;

	ta = *a;
	tb = *b;

  if (b != 0)
  {
    *a = ta / tb;
    *b = ta % tb;
  }
}
