#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,mat[3][3],trans[3][3];
    int *p1=mat[0];
    int *p2=trans[0];

    printf("Enter the value of 'N' for N X N matrix : ");
    scanf("%d",&n);

    printf("enter your first matrix\n");

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",((p1+i * n)+j));
        }
        
    }
    
    printf("enter your second matrix\n");

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",((p2+i * n)+j));
        }
        
    }

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (*(p1+n*i+j)!=*(p2+n*j+i))
            {
                break;
            }
            
        }
        
    }

    // if (j!=i)
       // break;
    
    if (i==n)
    {
        printf("symmetric");
    }
    else
    printf("Not Symmetric");
    
    return 0;
}
