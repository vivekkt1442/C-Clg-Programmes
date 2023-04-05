#include <stdio.h>

int main()
{
    float a, b, ans;

    printf("Enter a Operator :");
    char ch = getchar();

    printf("plase enter a value of A : ");
    scanf("%f", &a);

    printf("plase enter a value of B : ");
    scanf("%f", &b);

    switch (ch)
    {
    case '+':
        ans = a + b;
        break;

    case '-':
        ans = a - b;
        break;

    case '*':
        ans = a * b;
        break;

    case '/':
        ans = a / b;
        break;

    default:
        printf("enter vallid operator");
    }
    
    printf("%.3f",ans);

    return 0;
}