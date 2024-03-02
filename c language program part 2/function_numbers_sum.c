#include <stdio.h>
int sum();
int main()
{
    int a = 2, b = 2, c = 5;
    printf("%d", sum(a, b, c));

    return 0;
}
int sum(int x, int y, int z)
{
    int count;
    count = x + y + z;
    return count;
}