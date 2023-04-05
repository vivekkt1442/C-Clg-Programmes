#include <stdio.h>
int matrix(int *p, int *q)
{
    int i = 0, j = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", *(p +  j * 3 + j) + *(q + j * 3 + j));
        }
        printf("\n");
    }

    return 0;
}

int main()
{
    int a[3][3] = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    int b[3][3] = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    int c[3][3] = {0};

    int *p = a[0], *q = b[0];

    c[3][3] = matrix(p, q);

    return 0;
}
