#include <stdio.h>
int rec(int);
int main()
{
    int fact, a;
    printf("Enter any number");
    scanf("%d", &a);
    fact = rec(a);
    printf("The factorial of a is:%d", fact);
    return 0;
}
int rec(int x)
{
    int f;
    if (x == 1)
    {
        return (1);
    }
    else
    {
        f = x * rec(x - 1);
        return (f);
    }
}