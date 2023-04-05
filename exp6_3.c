#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, k, l = 0;
    char s1[30], s2[30];

    printf("enter your first string :");
    gets(s1);

    printf("enter the substring to be serched :");
    gets(s2);

    while (s2 != '\0')
    {
        l++;
    }

    for (i = 0; s1[i + l - 1] != '\0'; i++)
    {
        k = i;
        for (j = 0; j <= l - 1; j++)
        {
            if (s1[k] != s2[j])
            {
                break;
            }
            k++;
        }
    }
    if (j == l)
        printf("substring is found");
    else
        printf("substring is not found");

    // int i=0,j,k,pos,match=0,c,l1,l2;
    // while (s1[i]!='\0')
    // {
    //     k=i,j=0;
    // }
    // while (s1[k]=s2[j] && s2[j]!='\0')
    // {
    //     k++;
    //     j++;
    // }
    // if(s2[j]=='\0')
    // {
    //     match=1;
    //     pos = i;
    //     c++;
    //     printf("%d",pos);
    // }
    //     if(match==1)
    //     {
    //         printf("%c",c);
    //     }
    return 0;
}