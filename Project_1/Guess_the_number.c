#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    int number, guess, numguess = 1;
    srand(time(0));
    number = rand() % 100 + 1;

    do
    {
        printf("Enter the number\n");
        scanf("%d", &guess);

        if (guess > number)
        {
            printf("lower number\n");
        }
        else if (guess < number)
        {
            printf("higher number\n");
        }
        else
        {
            printf("you did it in %d\n", numguess);
        }

        numguess++;
    } while (guess != number);

    return 0;
}