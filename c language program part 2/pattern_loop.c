#include <stdio.h>
int main()
{
    int i, j, n, sp, k;
    printf("Enter the number of rows");
    scanf("%d", &n);
    sp = n - 1;

    for (i = 1; i <= n; i++)
    {
        for (k = sp; k >= 1; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
        sp--;
    }

    return 0;
}