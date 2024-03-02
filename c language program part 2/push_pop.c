#include <stdio.h>
#include <stdlib.h>
#define size 4

int top = -1, inp_arr[size];
void push();
void pop();
void show();
int main()
{
    int choice;
    system("cls");
    while (1)
    {
        printf("\nPerform operation on stack\n");
        printf("\n1.Push the element 2.Pop the element 3.Show 4.End\n");
        printf("\n\nEnter the choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            show();
            break;

        case 4:
            exit(0);

        default:
            printf("\nInvalid choice!!");
        }
    }
}

void push()
{
    int x;
    if (top == size - 1)
    {
        printf("Overflow!!");
    }
    else
    {
        printf("\nEnter the element to be added on stack:");
        scanf("%d", &x);
        top = top + 1;
        inp_arr[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("Popped element:%d", inp_arr[top]);
        top = top - 1;
    }
}

void show()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nElements present in stack:\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", inp_arr[i]);
        }
    }
}