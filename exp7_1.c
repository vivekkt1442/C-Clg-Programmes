#include <stdio.h>

void printline();

int main()
{
    printline();
}

void printline()
{
    int i;
    for (i = 0; i < 81; i++)
    {
        printf("%c", 61);
    }
}
