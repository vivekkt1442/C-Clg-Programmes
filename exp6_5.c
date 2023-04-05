#include <stdio.h>
#include <string.h>
int main()
{
    // int t,i,j;
    // char a[50];
    int i, j, k;
    char a[50], b[50];
    printf("enter the string you want to reverse : ");
    gets(a);
    // i = 0;
    // while (a[i] != '\0')
    // {
    //     i++;
    // }
    // printf("%d",i);

    i=strlen(a)-1;

    for (j = i, k = 0; j >= 0; k++, j--)
    {
        b[k] = a[j];
    }

    b[k] = '\0';

    // for ( i = 0; i < j/2 ; i++)
    // {
    //     t=a[i];
    //     a[i]=a[j-i-1];
    //     a[j-i-1]=t;
    // }

    puts(b);

    return 0;
}