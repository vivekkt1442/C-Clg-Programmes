#include <stdio.h>
#include <string.h>
struct product
{
    int id;
    char name[30];
    float price;
} p1[5], p2;

struct product searchproduct()
{
    int i, n, j, pos1, r;
    // struct sorting temp;

    printf("enter how many product you want to enter : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("enter the Product ID : ");
        scanf("%d", &p1[i].id);
        printf("enter the PRoduct NAME : ");
        scanf("%s", &p1[i].name);
        printf("enter the Product price  : ");
        scanf("%f", &p1[i].price);
        printf("\n");
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            r = strcmp(p1[i].name, p1[j].name);
            if ((r > 0))
            {
                p2 = p1[i];
                p1[i] = p1[j];
                p1[j] = p2;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("\n|%-10d|%-10s|%-10.2f|\n", p1[i].id, p1[i].name, p1[i].price);
    }
}

int main()
{
    searchproduct();

    return 0;
}
