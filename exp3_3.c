#include <stdio.h>

int main()
{
    int n;

    printf("enter your marks:\n");
    scanf("%d",&n);

    if (n>80)
    {
        printf("your grade is A");
    }
    else if (n>=61 && n<=80)
    {
        printf("your grade is B");
    }
    else if (n>=51 && n<=60)
    {
        printf("your grade is C");
    }
    else if (n>=41 && n<=50)
    {
        printf("your grade is D");
    }
    else if (n>=35 && n<=40)
    {
        printf("your grade is E");
    }
    else
    {
        printf("your grade is F");
    }
    return 0;
    
}