#include <stdio.h>
#include <string.h>

int main()

{
    int n,i,j;
    char a[10][10];
    char temp[20];

    printf("how many string you want to short  : ");
    scanf("%d",&n);

    printf("enter the string's : ");
    
    for (i = 0; i <= n; i++)
    {
        gets(a[i]);
    }

        for (i = 0; i <= n; i++)
        {
            for (j = i+1; j <= n; j++)
            {
            
                 if ( strcmp(a[i], a[j])  > 0)
                {
                    strcpy(temp, a[i]);
                    strcpy(a[i], a[j]);
                    strcpy(a[j], temp);
                }
            }
        }
    printf("\nstring in dictionary order\n");

    for (i = 0; i <= n; i++)
    {
        puts(a[i]);
    }
    return 0;
}
