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

    printf("Enter The Elment value You Want To Insert : ");
    scanf("%d", &value);

    printf("Enter The Position : ");
    scanf("%d", &pos);

    for (i = n - 1; i >= pos - 1; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos - 1] = value;

    for (i = 0; i < n + 1; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}