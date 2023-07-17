#include <stdio.h>
int reverse(int *array[], int n)
{
    int temp;
    for (int i = 0; i < (n / 2); i++)
    {
        temp = array[i];
        array[i] = array[7 - i - 1];
        array[7 - i - 1] = temp;
    }
}

int main()
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7};
    reverse(numbers, 7);
    for (int i = 0; i < 7; i++)
    {
        printf("the number that is reversed in the number %d is %d\n", i, numbers[i]);
    }

    return 0;
}