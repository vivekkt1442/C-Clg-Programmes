#include <stdio.h>
#include <string.h>

int main()
{
  int i, flag = 0;
  char a[30];
  printf("enter the 1st string : ");
  gets(a);

  char b[30];
  printf("enter the 2nd string : ");
  gets(b);

  for (i = 0; a[i] != '\0' || b[i] != '\0'; i++)
  {
    if (a[i] != b[i])
    {
      flag = 1;
      break;
    }
  }

  if (flag == 1)
    printf("these string is not same ");
  else
    printf("these string is same");

  return 0;
}
