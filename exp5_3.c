#include <stdio.h>
int main()
{
   int a[10], n, i, j, t;

   printf("how many number you want to sorting : ");
   scanf("%d", &n);

   for (i = 0; i < n; i++)
   {
      printf("your %d element is : ", i + 1);
      scanf("%d", &a[i]);
   }

   for (i = 0; i < n - 1; i++)
   {
      for (j = i + 1; j < n; j++)
      {
         if (a[i] > a[j])
         {
            t = a[i];
            a[i] = a[j];
            a[j] = t;
         }
      }
   }

   printf("your sorted array is :");

   for (i = 0; i < n; i++)
   {
      printf("%d\t", a[i]);
   }

   return 0;
}