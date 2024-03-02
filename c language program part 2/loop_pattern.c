#include <stdio.h>
int main()
{
    int i, j;
    for (i = 7; i >= 1; i--)
    {
        for (j = 7; j >= i; j--)
        {
            printf("%c ", j + 64);
        }
        printf("\n");
    }
    return 0;
}