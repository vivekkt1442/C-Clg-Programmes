#include <stdio.h>
int main()
{
    int i, n, pos, a[100], value;

    printf("Enter The How Many Elemnt You Want Enter : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Your  %d Elemnt = ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("ENter The value, TO Delete : ");
    scanf("%d", &value);

    for (i = 0; i < n; i++)
    {
        if (value == a[i])
        {
            for (pos = i; pos < n - 1; pos++)
            {
                a[pos] = a[pos + 1];
            }
        }
    }

    printf("\n\n");

    for (i = 0; i < n - 1; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}