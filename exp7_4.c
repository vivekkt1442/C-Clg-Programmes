#include<stdio.h>

int add(int,int);
int mul(int,int);
float div(float,float);
int sum(int,int);

int main()
{
    float a,b;
    printf("enter any two value : ");
    scanf("%f %f",&a,&b);

    printf("sum=%d\n",add(a,b));
    printf("mul=%d\n",mul(a,b));
    printf("div=%f\n",div(a,b));
    printf("sum=%d\n",sum(a,b));

    return 0;

}

int add(int x,int y)
{

    return x+y;
}
int mul(int x,int y)
{
    return x*y;
}
float div(float x,float y)
{
    return x/y;
}
int sum(int x,int y)
{
    return x+y;
}
