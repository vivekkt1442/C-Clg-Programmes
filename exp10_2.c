#include <stdio.h>
union bio
{
    char name[20];
    struct person
    {
        int date;
        int month;
        int year;
    } age;
} b[3];

int main()
{
    int i,n;

    printf("How Many Person Detail You Want To Enter : ");
    scanf("%d",&n);

    for (i = 0; i < n; i++)
    {
        printf("Enter The Person Name : ");
        scanf("%s", b[i].name);
        printf("%s",b[i].name);

        printf("enter the birth year dd-mm-yyyy : ");
        scanf("%d %d %d",&b[i].age.date,&b[i].age.month,&b[i].age.year);

        if (b[i].age.year >= 2004)
        {
            printf("dob of child is %d-%d-%d\n", b[i].age.date, b[i].age.month, b[i].age.year);
        }
        else if (b[i].age.year >= 1962)
        {
            printf("age of adult is : %d \n",2023-b[i].age.year);
        }
        else
        {
            printf("old person");
        }
    }
    return 0;
}
