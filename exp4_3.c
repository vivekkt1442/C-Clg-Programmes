#include <stdio.h>

int main()
{
    int n,a,b,c,i;
    a=0,b=1,c=a+b;

    printf("how many number you want to print fibbonacci series : ");
    scanf("%d",&n);

    printf("1\t");

    for ( i = 0; i < n-1; i++)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
   return 0;
}

