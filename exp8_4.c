#include <stdio.h>
#include<string.h>
int main()

{
    int i,j,n,k;
    char a[100],b[100];
    
    printf("enter the first string : ");
    gets(a);
    printf("enter the second the string : ");
    gets(b);

    i = strlen(a);

    printf("enter how many lAST character you want to copy from string 2 to string 1 :");
    scanf("%d",&n);

    j = strlen(b)-n;

    for ( k = j; b[k] != '\0'; k++)
    {
        a[i]=b[k];
        i++;
    }

    a[i]='\0';

    puts(a);

return 0;


}
