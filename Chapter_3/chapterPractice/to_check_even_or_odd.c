#include <stdio.h>

int main()
{

    int a, b;
    printf("give me a number to prove that the number is given that weather it is even or odd ", a);
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("this is even %d", a);
    }

    else
    {
        printf("this is odd %d", a);
    }

    return 0;
}