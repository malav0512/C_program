#include <stdio.h>
#define PI 3.1415
int main()
{
    int i;
    printf("Enter the value of radius:");
    scanf("%d", &i);
    float area = PI * i * i;
    printf("The area of circle is %.2f", area);
    return 0;
}