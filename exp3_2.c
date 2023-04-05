#include <stdio.h>

int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if(n>0)
    {
        printf("%d is positive",n);
    }
    else if(n<0)
    {
        printf("%d is a negative",n);
    }
    else
    {
        printf("%d is zero",n);
    }

    return 0;
    
}