#include <stdio.h>

int main()

{

    int i, count = 0, n;

    printf("enter a number :");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
        if (count == 0)
        {
            printf("the number is prime number");
            break;
        }
        else
        {
            printf("the number is not a prime a number");
            break;
        }
    }

    // int n,boolean;
    // int i=2;
    // printf("enter a number :");
    // scanf("%d",&n)
    // boolean prime = false
    // while(!prime && (i<n))
    // {
    //     if(n%i==0)
    //     {
    //         prime=true;
    //     }
    //     i++;
    // }
    // if (prime==true)
    // {
    //     printf("%d is not a prime number",n);
    // }
    // else
    // {
    //     printf("%d is a prime a number",n);
    // }
    return 0;
}