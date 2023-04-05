#include <stdio.h>

int main()
{
    int H, M, S;

    printf("enter time in second :");

    scanf("%d", &S);

    H = S / 3600;
    M = (S % 3600) / 60;
    S = (S % 3600) % 60;

    printf("%d : %d : %d ", H, M, S);

    return 0;
}