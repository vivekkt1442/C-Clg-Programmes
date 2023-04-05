#include <stdio.h>
int main()
{
    int a[10], i, n, max = 0, min = 1000, t, pos1 = 0, pos2 = 0;

    printf("enter how many number you want to enter : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("your %d element is : ", i + 1);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            pos1 = i;
        }

        else if (a[i] < min)
        {
            min = a[i];
            pos2 = i;
        }
    }
    t = a[pos1];
    a[pos1] = a[pos2];
    a[pos2] = t;

    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    printf("\n\n\nthe maximun number is : %d\n", max);
    printf("the minimum number is : %d\n", min);

    return 0;
}