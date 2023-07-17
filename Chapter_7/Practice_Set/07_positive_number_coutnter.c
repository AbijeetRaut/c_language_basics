#include <stdio.h>
int main()
{
    int value = 0;
    int array[] = {1, 2, 789, 46, 6, 3, 5, -4, -5, -6, -7};

    for (int i = 0; i < 10; i++)
    {
        if (array[i] >= 0)
        {
            value = value + 1;
        }
    }
    printf("there are %d positive numbers \n", value);

    return 0;
}