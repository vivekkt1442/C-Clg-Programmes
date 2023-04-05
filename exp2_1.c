#include <stdio.h>

int main()
{
    float C,F;

    printf("enter your number to convert fahrenheit to celcius : ");

    scanf("%d",&F);

    C = 5 * (F-32)/9;

    printf("%f",C);

    return 0;
}