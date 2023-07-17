#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int RPS(char computer, char player)
{
    if (computer == player)
    {
        return 0;
    }
    if (player == 'p' && computer == 'r') //for paper
    {
        return 1;
    }
    else if (player == 'p' && computer == 's')
    {
        return -1;
    }
    if (player == 'r' && computer == 's') //for rock
    {
        return 1;
    }
    else if (player == 'r' && computer == 'p')
    {
        return -1;
    }
    if (player == 's' && computer == 'r') //for sissor
    {
        return -1;
    }
    else if (player == 's' && computer == 'p')
    {
        return 1;
    }
}
int main()
{
    char computer, player;
    int number;
    srand(time(0));
    number = rand() % 100 + 1;
    // printf("%d", number);
    printf("rock 'r' paper 'p' & sissor 's' \t");
    scanf("%s", &player);
    if (number < 33)
    {
        computer = 'r';
    }
    else if (number > 33 && number < 75)
    {
        computer = 'p';
    }
    else if (number > 75)
    {
        computer = 's';
    }
    int result = RPS(computer, player);
    if (result == 0)
    {
        printf("draw!");
    }
    else if (result == 1)
    {
        printf("player won!");
    }
    else
    {
        printf("computer won!");
    }
    return 0;
}