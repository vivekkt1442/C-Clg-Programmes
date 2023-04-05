#include <stdio.h>
#include <string.h>
int main()
{
    int i,l;
    char a[30];
    printf("Enter The Strig");
    gets(a);
    l=strlen(a);

    printf("%d\n",l);

    for ( i = 0; i < l; i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            a[i]=a[i]+32;
        }
        else if (a[i]>=97 && a[i]<=122)
        {
            a[i]=a[i]-32;
        }
    }
    for ( i = 0; i < l ; i++)
    {
       printf("%c",a[i]);
    }
    return 0;
}