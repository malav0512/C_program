#include <stdio.h>
void swap();
int main()
{
    int a, b;
    printf("Enter value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);
    swap(&a, &b);
    printf("Enter the new value of a %d and that of b is %d", a, b);
    return 0;
}
void swap(int *a, int *b)
{
    int count;
    count = *a;
    *a = *b;
    *b = count;
}