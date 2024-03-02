#include <stdio.h>
int main()
{
    // Basic array making
    int m;
    printf("Enter the number of elements:");
    scanf("%d", &m);
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        printf("Enter the %d th element :", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < m; i++)
    {
        printf("arr[%d]:%d", i, arr[i]);
    }
    //Sorting of array
    
    return 0;
}