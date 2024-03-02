#include <stdio.h>
int main()
{
    int a[5] = {0, 91, 92, 993, 49};
    int *ptr;
    *ptr = a[2];
    printf("%d", *(ptr));
    return 0;
}