#include <stdio.h>
int fact();
int main()
{
    int n, i, sum = 0;
    printf("Enter the number :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + (fact(i) / i);
    }
    printf("the sum of the given series is %d", sum);

    return 0;
}
int fact(int x)
{
    int i, count = 1;
    for (i = 1; i <= x; i++)
    {
        count = count * i;
    }
    return count;
}