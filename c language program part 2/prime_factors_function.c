#include <stdio.h>
int prime(int);
int main()
{
    int num;
    printf("Enter the num:");
    scanf("%d", &num);
    prime(num);
    return 0;
}
int prime(int x)
{
    int a;
    for (a = 2; a <= x; a++)
    {
        if (x % a == 0)
        {
            printf("%d ", a);
            x = x / a;
            a--;
        }
    }
}