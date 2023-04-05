#include <stdio.h>

int main()
{
    int a[10], i, n, sum = 0;
    float avg=0;

    printf("enter how many number you want to find avg : ");
    scanf("%d", &n);

        for (i = 0; i < n; i++)
    {
        printf("your %d element is : ",i+1);
        scanf("%d", &a[i]);
        sum =sum + a[i];
    }

    avg = (float)sum / n;
    printf("avg is %4.2f",avg);

    return 0;
}