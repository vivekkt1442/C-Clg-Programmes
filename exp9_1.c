#include <stdio.h>
struct table
{
    int id;
    char name[30];
    struct marks
    {
        int pps;
        int bee;
        int math;
    } mark1;
    int totalmarks;

} student[10];
int main()
{
    int max=0;
    int i,n,pos1;
    printf("enter the number you want to find reasult : ");
    scanf("%d",&n);

    for (i = 0; i < n; i++)
    {
        printf("ID : ");
        scanf("%d",&student[i].id);
        printf("NAME : ");
        scanf("%s",student[i].name);


        printf("PPS : ");
        scanf("%d",&student[i].mark1.pps);
        printf("BEE : ");
        scanf("%d",&student[i].mark1.bee);
        printf("MATH : ");
        scanf("%d",&student[i].mark1.math);

        printf("TOTALMARKS : ");
        scanf("%d",&student[i].totalmarks);

    }

    for ( i = 0; i < n; i++)
    {
        printf("%d | %-12s| %-8d |%-8d |%-5d| %-12d|\n",student[i].id,student[i].name,student[i].mark1.pps,student[i].mark1.bee,student[i].mark1.math,student[i].totalmarks);
    }

    for ( i = 0; i < n; i++)
    { 
        if ((student+i)->totalmarks > max )
        {
            max=(student+i)->totalmarks;
            pos1=i;
        }    
    }

    printf("\n\n\n%-3d | %-12s| %-8d |%-8d |%-5d| %-12d| %-d\n",student[pos1].id,student[pos1].name,student[pos1].mark1.pps,student[pos1].mark1.bee,student[pos1].mark1.math,student[pos1].totalmarks,max);
    

    return 0;
}

