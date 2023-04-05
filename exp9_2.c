#include <stdio.h>
struct product
{
    int id;
    char name[30];
    float price;
} p2, p1[5];

struct product searchbyid()
{
    int i, n, pos1;

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
        printf("\n\n");
    }

    printf("\n\n\nenter the id u want to search : ");
    scanf("%d", &p2.id);
    printf("\n\n");

    for (i = 0; i < n; i++)
    {
        if ((p1 + i)->id == p2.id)
        {
            pos1 = i;
        }
    }
    printf("\n\n|%-12d |%-12s |%-12f|", p1[pos1].id, p1[pos1].name, p1[pos1].price);
}

int main()
{
    searchbyid();

    return 0;
}
