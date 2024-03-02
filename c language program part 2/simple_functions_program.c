#include <stdio.h>
void italy();
void argentina();
void france();
int main()
{
    printf("I am in main\n");
    italy();
    return 0;
}
void italy()
{
    printf("I am in italy\n");
    france();
}
void france()
{
    printf("I am in france\n");
    argentina();
}
void argentina()
{
    printf("I am in argentina \n");
}