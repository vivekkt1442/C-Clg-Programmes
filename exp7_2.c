#include <stdio.h>

float Total_Amount(float ,float ,int );

int main()

{
    int n;
    float p,r;

    printf("enter you want to drop amount in bank :");
    scanf("%f",&p);

    printf("enter at what intrest ");
    scanf("%f",&r);

    printf("period : ");
    scanf("%d",&n);


    Total_Amount( p,r,n);

    return 0;

}
float Total_Amount(float p,float r,int n)
{
    int y=1;
    float Total_Amount;
    Total_Amount=p;

    while (y<=n)
    {
        Total_Amount=Total_Amount*(1+r);
        y++;
    }
     printf("total amount is %f",Total_Amount);
}


