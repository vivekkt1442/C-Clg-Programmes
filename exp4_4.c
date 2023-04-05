#include <stdio.h>

int main()
{
    int B,T,N;
    B=T=N=0;
    char c;

    printf("enter any stament : ");
    while(c != '*')                         //c[100]=getchar()!=EOF
    {
        c=getchar();

        if(c==' ')
        {
            B++;
        }
        if(c=='\t')
        {
            T++;
        }
        if(c=='\n')
        {
            N++;
        }
    }
    printf("blanks : %d\n",B);
    printf("tabs : %d\n",T);
    printf("new lines : %d\n",N);

    return 0;
}
