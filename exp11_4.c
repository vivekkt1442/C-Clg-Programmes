/*W.A.P. that will find maximum number from given 1-D array by using the concept of
function returning pointer.*/

#include <stdio.h>
int* find_max(int* p)
{
     int i=0;
     static int max;

    // printf("Inside Function : %d %d\n",max,i);
    for ( i = 0; i < 5;  i++)
    {
        printf("enter %d element : ",i+1);
        scanf("%d",p+i);
    }
    max=*p;
    
    for ( i = 0; i < 5; i++)
    {
        if (*(p+i)>=max)
        {
            max=*(p+i);
        }    
    }

    return(&max);
}
void main()
{
    int a[10],ans;
    int *p,*q;

   p=a;

   q=find_max(p);

   printf("the maximum number is : %d\n",*q);

//    q=find_max(p);
//    printf("%d\n",*q);

}


