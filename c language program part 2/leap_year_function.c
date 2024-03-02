#include <stdio.h>
void leap();
int main()
{
    int a;
    printf("Enter any year:");
    scanf("%d", &a);
    leap(a);
    return 0;
}
void leap(int a)
{
    if (a % 4 == 0)
    {
        printf("Entered year is a leap year");
    }
    else
    {
        printf("Entered year is not a leap year");
    }
}