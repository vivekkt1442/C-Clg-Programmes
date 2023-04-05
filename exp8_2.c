#include<stdio.h>
int sum(int y)
{
    if (y==0)
    {
        return 0;
    }
    else
        return (y+sum(y-1));
}

int main()
{
    int a;

    printf("enter number : ");
    scanf("%d",&a);

    printf("%d",sum(a));
    return 0;

}