#include <stdio.h>
#include <string.h>
int main()
{
    int l, i, match = 0, j = 0;
    char a[50], b[50];
    printf("enter the string : ");
    gets(a);

    l = strlen(a) - 1;
    printf("%d\n", l);

    while (i < j)
    {
        if (a[i] != b[j])
        {
            match = 1;
            break;
        }
        i++;
        j++;
    }

    if (match == 0)
    {
        printf("the string is palindrom");
    }

    // for( i = 0; i < l; i++)
    // {
    //     if(a[i]!=a[l-i-1])
    //     {
    //         flag=1;
    //         break;
    //     }
    // }
    // if(flag==1)
    // printf("the string is not palindrom");
    // else
    //      printf("these string is palndrom");
    return 0;
}