#include <stdio.h>
#include <math.h>
int power();
int main()
{
    int a, b;
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);
    printf("The answer is %d", power(a, b));
    return 0;
}
int power(int x, int y)
{
    return pow(x, y);
}