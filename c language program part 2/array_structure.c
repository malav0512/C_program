#include <stdio.h>
struct student
{
    int sno;
    char name[30];
    float marks;
};
void main()
{
    struct student b[5];
    struct student *s;
    int i;
    for (i = 1; i <= 5; i++)
    {
        printf("Enter details of student: ");
        scanf("%d%s%f", &b[i].sno, &b[i].name, &b[i].marks);
    }
    s = &b[5];
    for (i = 1; i <= 5; i++)
    {
        printf("Entered details of student %d\n:", i);
        printf("Rollno: %d\n", b[i].sno);
        printf("Name:%s\n", b[i].name);
        printf("Marks:%d\n", b[i].marks);
    }
}