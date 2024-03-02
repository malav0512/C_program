#include <stdio.h>
#include <string.h>
int checkwin();
int main()
{
    printf("Welcome to game!!!\n");
    char a[20];
    printf("Enter your name :");
    scanf("%s", &a[20]);
    printf("\n\n");
    char b[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    // Input section for players
    int player = 1;
    for (int count = 1; count <= 9; count++)
    {

        player = (count % 2 == 0) ? 2 : 1; // switching players
        char mark = (player == 1) ? 'X' : 'O';
        int input;
        printf("Enter the position:");
        scanf("%d", &input);
        b[input] = mark;
        system("cls");
        printf("~~~TIC TAC TOE~~~\n");
        printf("    |   |   \n");
        printf("  %c | %c | %c\n ", b[1], b[2], b[3]);
        printf("___|___|___\n");
        printf("    |   |   \n");
        printf("  %c | %c | %c\n ", b[4], b[5], b[6]);
        printf("___|___|___\n");
        printf("    |   |   \n");
        printf("  %c | %c | %c\n ", b[7], b[8], b[9]);
        printf("   |   |   \n");
    }
    int result = checkwin(*b);
    {
        if (result == 1)
        {
            printf("Player %d is the winner", player);
        }
        else
        {
            printf("The game is draw!!Please try again...");
        }
    }

    return 0;
}

int checkwin(char b[])
{
    if (b[1] == b[2] && b[2] == b[3])
        return 1;
    else if (b[4] == b[5] && b[5] == b[6])
        return 1;
    else if (b[7] == b[8] && b[8] == b[9])
        return 1;
    else if (b[1] == b[4] && b[4] == b[7])
        return 1;
    else if (b[2] == b[5] && b[5] == b[7])
        return 1;
    else if (b[3] == b[6] && b[6] == b[9])
        return 1;
    else if (b[1] == b[5] && b[5] == b[9])
        return 1;
    else if (b[3] == b[5] && b[5] == b[7])
        return 1;
    else
        return 0;
}