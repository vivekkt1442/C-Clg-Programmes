#include <stdio.h>

int expo(int, int);

int main()
{
    int x, y, ans;
    printf("enter the number you want to find exponential\n");

    printf("Enter Base : ");
    scanf("%d", &x);

    printf("Enter power : ");
    scanf("%d", &y);

    ans = expo(x, y);

    printf("%d", ans);

    return 0;
}

int expo(int a, int b)
{
    int answer;
    if (b == 0)
    {
        return 1;
    }
    else
    return answer = a * expo(a, b - 1);

}
