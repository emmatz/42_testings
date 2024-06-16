#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int get_total_elements(char *str);
int get_sizeofarray(int i);
void  fail(void);
//void initial_array(int s);
//void  show_array(int s);
void initial_array(int s,int matrix[s][s]);
void  show_array(int s,int matrix[s][s]);
void get_initial_values(char *str, int i);

int	main(int argc, char **argsv)
{
  (void)argc;
  int length;
  int a;
  //int *ptr_ba;
  //int int_m[][];

  length = get_total_elements(argsv[1]);
  a = get_sizeofarray(length);
  if (get_sizeofarray(length) < 0)
    fail();
  printf("L: %d\n", a);
  //ptr_ba = initial_array(a);
  //for(int x = 0; x < a; x++)
  //{
  //  printf("%d ", ptr_ba[x]);
  //}
  int matrix[a][a];

  initial_array(a, matrix);
  show_array(a, matrix);
  write(1, "\n", 1);
  matrix[4][1] = 2;
  show_array(a, matrix);

  get_initial_values(argsv[1], length);

	return 0;
}

void  fail(void)
{
  write(1, "Error\n", 6);
  return ;
}

int get_total_elements(char *str)
{
  int length = 0;
  int size = 0;

  while(str[length] != '\0')
  {
    if(str[length] >= '0' && str[length] <= '9')
      size++; // Counting only chars which are "numbers" between 0 and 9
    length++; // Full argument in position 1
  }
  return size;
}

int get_sizeofarray(int size)
{
  /* 
   * Normal 4x4 array would be
   *
   * 0 0 0 0
   * 0 0 0 0
   * 0 0 0 0
   * 0 0 0 0
   *
   * We need to consider the information provided as more elements, that's why
   * the size of the final array is bigger
   *
   * 0 4 3 2 1 0
   * 4 0 0 0 0 1
   * 3 0 0 0 0 2
   * 2 0 0 0 0 2
   * 1 0 0 0 0 2
   * 0 1 2 2 2 0
   */

  switch (size)
  {
    case 16:
      return 6;
    case 25:
      return 7;
    case 36:
      return 8;
    case 49:
      return 9;
    case 64:
      return 10;
    case 81:
      return 11;
    default:
      return -1;
  }
}

// building initial array
//void initial_array(int s, int matrix[s][s])
void initial_array(int s, int matrix[s][s])
{
  //int big_array[s][s];
  int a;
  int b;

  a = 0;
  while(a < s)
  {
    b = 0;
    while(b < s)
    {
      matrix[a][b] = 0;
      //big_array[a][b] = 0;
      b++;
    }
    a++;
  }
  //big_array[4][5] = 5;
  /*
  for (int a = 0; a < s; a++)
  {
    for (int b = 0; b < s; b++)
    {
      big_array[a][b] = 0;
    }
  }
  */ 
  /*
  for (int a = 0; a < s; a++)
  {
    for (int b = 0; b < s; b++)
    {
      printf("%d ", big_array[a][b]);
    }
  printf("\n");
  }
  */
  //return big_array;
  //return;
}

//void  show_array(int s)
void  show_array(int s, int matrix[s][s])
{
  int   i;
  int   j;
  char  m;

  i = 0;
  while(i < s)
  {
    j = 0;
    while(j < s)
    {
      m = '0' + matrix[i][j];
      write(1, &m, 1);
      if (j == s-1)
        //write(1, &m, 1);
        write(1, "\n", 1);
      else
        write(1, " ", 1);
      j++;
    }
    //write(1, "\n", 1);
    i++;
  }
}

void get_initial_values(char *str, int i)
{
  int length = 0;
  int v[i];

  while(str[length] != '\0')
  {
    if(str[length] >= '0' && str[length] <= '9')
    {
      v[i] = atoi((str[length]));
      //v[i] = atoi(str[length]);
      v[i]++;
    }
    length++; 
  }

  for (int a = 0; a < i; a++)
  {
    printf("%d ", v[a]);
  }
  write(1, "\n", 1);
  //return size;
}

