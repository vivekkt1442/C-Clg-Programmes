#include <stdio.h>
int main()
{
  int i, j, k;
  int a[3][3], b[3][3], c[3][3];

  printf("enter your first matrix according to raw wise\n");

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("matrix element [%d] [%d] :", i, j);
      scanf("%d", &a[i][j]);
    }
  }
  printf("\nyour matrix 1st is \n");

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d\t", a[i][j]);
    }
    printf("\n");
  }

  printf("\nenter your second matrix according to raw wise\n");

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("matrix element [%d] [%d] :", i, j);
      scanf("%d", &b[i][j]);
    }
  }
  printf("\nyour matrix 2nd is \n");

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d\t", b[i][j]);
    }
    printf("\n");
  }

  printf("\n\n\n\the  multiplication of two matrix is\n");

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      c[i][j] = 0;
      for (k = 0; k < 3; k++)
      {
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d\t ", c[i][j]);
    }
    printf("\n");
  }
  return 0;
}