#include <Stdio.h>
#include <String.h>
#include <stdlib.h>

struct item
{
    char name[30];
    int price;
    int quantity;
} s1, p;
struct item update1(struct item y)
{
    printf("you are inside FUnction Update1\n");

    printf("enter the updated name : ");
    scanf("%s", y.name);
    printf("enter updated  Price : ");
    scanf("%d", &y.price);
    printf("Enter updated Quantity : ");
    scanf("%d", &y.quantity);

    return y;
}
int main()
{
    printf("enter the item name : ");
    scanf("%s", s1.name);
    printf("enter Price : ");
    scanf("%d", &s1.price);
    printf("Enter Quantity : ");
    scanf("%d", &s1.quantity);

    p = update1(s1);

    printf("Name     : %-5s\n", p.name);
    printf("Price    : %-5d\n", p.price);
    printf("Quantity : %-5d\n", p.quantity);

    return 0;
}