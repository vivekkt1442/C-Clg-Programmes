#include <stdio.h>
int asscending(int a[],int n)
{
    int i, j, t;

    for (i = 0; i < n-1; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}

int main()
{
    int a[100], n, i;

    printf("enter no of elment you wnat to sort : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf(" enter %d elment : ",i+1);
        scanf("%d", &a[i]);
    }

    asscending(a, n);

    return 0;
}