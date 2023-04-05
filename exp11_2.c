#include<stdio.h>
#include<string.h>

int mystrcat(char *s1,char *s2)
{
    // strcat(s1,s2);
    int i=0,j=0,k;

    while (*(s1+i)!='\0')
    {
        i++;
    }

    while (*(s2+j)!='\0')
    {
       *(s1+i)=*(s2+j);
       i++;
       j++;
    }

   *(s1+i)='\0';
    return 0;

}
int main()
{
    char a[100],b[100];
    printf("enter the first string : ");
    gets(a);
    printf("enter the second string : ");
    gets(b);

    char*p,*q;
    p=a;
    q=b;

    mystrcat(p,q);
    printf("%s",a);

    return 0;
}
