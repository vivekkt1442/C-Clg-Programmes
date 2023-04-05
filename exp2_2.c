#include <stdio.h>

int main()
{
    int D, M, Y;
    printf("enter number of days:");

    scanf("%d", &D);

    Y = D / 365;
    M = (D % 365) / 30;
    D = (D % 365) % 30;

    printf("years : %d\n", Y);
    printf("months: %d\n", M);
    printf("days  : %d\n", D);

    return 0;
}