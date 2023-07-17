#include <stdio.h>

int main()
{

    int num1;
    int num2;


    switch (num1, num2)
    {
    case '+':
    printf("give me 2 number to perform addition \n", num1+num2);
    scanf("%d%d", &num1,&num2);
        break;

    default:
        break;
    }

    return 0;
}