#include <stdio.h>
#define size 4
int main()
{
    int top = -1;
    int stack[size];
    while (top >= -1)
    {
        int item;
        {
            if (top == size - 1)
                printf("Return Overflow");
            else
            {
                printf("Enter stack element:");
                scanf("%d", &item);
                top = top + 1;
                stack[top] = item;
            }
        }
    }
    printf("Stack non linear ds:");
    for (int i = size; i > -1; i--)
    {
        printf("%d", stack[i]);
    }
    return 0;
}