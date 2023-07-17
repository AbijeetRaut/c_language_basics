#include <stdio.h>

int main()
{

    int age;

    printf("Enter Your Age \t");
    scanf("%d", &age);

    if (age >= 75 && age <= 18)
    {
        printf("you are %d so you cant drive", age);
    }
    else
    {
        printf("you can drive");
    }
    if (age > 75)
    {
        printf("\nyour age is %d so you cant drive " ,age);
    }
    

    return 0;
}