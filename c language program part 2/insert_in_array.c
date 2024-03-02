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
    // Insertion of array
    int index;
    printf("\nEnter the index in which new element needs to be added:");
    scanf("%d", &index);
    for (int i = (m - 1); i >= index; i--)
    {

        arr[i + 1] = arr[i];
        // The value of i th element is copied to i+1 th element
    }
    printf("Enter the new element:");
    scanf("%d", &arr[index]);
    printf("new arr[]");
    for (int i = 0; i < m + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}