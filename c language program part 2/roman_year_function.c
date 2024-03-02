#include <stdio.h>
void rom();
int main()
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    rom(year);
}

void rom(int year)
{
    if (year >= 1000)
    {
        printf("m");
        rom(year - 1000);
    }
    else if (year >= 500)
    {
        printf("d");
        rom(year - 500);
    }
    else if (year >= 100)
    {
        printf("c");
        rom(year - 100);
    }
    else if (year >= 50)
    {
        printf("l");
        rom(year - 50);
    }
    else if (year >= 10)
    {
        printf("x");
        rom(year - 10);
    }
    else if (year >= 5)
    {
        printf("v");
        rom(year - 5);
    }
    else if (year >= 1)
    {
        printf("i");
        rom(year - 1);
    }
}