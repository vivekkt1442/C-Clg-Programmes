/*swap/exchange values of two integer variable using function.use pointers.*/

#include<stdio.h>
void swap (int*a,int*b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}
int main()
{
    int *p,*q;
    int a=5,b=10;
    p=&a;
    q=&b;
    swap(p,q);
    printf("a=%d\tb=%d",a,b);

    return 0;

}