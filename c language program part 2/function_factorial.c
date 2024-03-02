#include <stdio.h>
#include <math.h>
int fact();
int main()
{
    int x;
    printf("Enter the number:");
    printf("Factorial of given number is %d", fact(x));
    return 0;
}
int fact(int x)
{
    int i, n, fact = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}