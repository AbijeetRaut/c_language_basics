#include <stdio.h>

int main()
{

    int WinCar;

    printf("give me a number\t");
    scanf("%d", &WinCar);

    if (WinCar == 1)
    {
        printf("Congras you won a car\n");
    }
    else if (WinCar == 2)
    {
        printf("sorry you won't won\n");
    }

    else if (WinCar == 3)
    {
        printf("better luck next time");
    }

    else
    {
        printf("the number is beyond 1, 2 and 3\n");
    }
    if (WinCar == 1)
    {
    printf("go to the stage to calm the price");
    }
    else
    {
       printf("go home and be relax");
    }
    
    

    return 0;
}