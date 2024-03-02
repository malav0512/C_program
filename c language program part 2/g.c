#include<stdio.h>
int main()
{
    int i,j;
    
    printf("Enter the value of i ");
    scanf("%d\n",&i);

    switch(i)
    {
        printf("Hello \n");
        case 1:
        j=10;
        break;

        case 2:
        j=20;
        break;
    }
    return 0;
}
