#include<stdio.h>
union book 
{
    int isbn_no;
    char name[20];
    int price;

}book [3];

int main()
{
    int i,n;

    printf("how many book Detail you wan to enter : ");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        printf("enter the ISBN number : ");
        scanf("%d",&book[i].isbn_no);

        printf("enter the BOOK name : ");
        scanf("%s",book[i].name);

        printf("enter the BOOK price : ");
        scanf("%d",&book[i].price);

        printf("\n\n");
    }  

    for ( i = 0; i < n; i++)
    {
        printf("\n%-10d| %-10s| %-10d|\n",book[i].isbn_no,book[i].name,book[i].price);
    }
    //printf starting its evalution from right 
    //union can store any one data type
    //so printf ma price store karine stop thay jase ((because printf right side thi evalute thay))
    return 0;
}
