#include <stdio.h>
int main()
{
    int array[10];
    int *pointer;
    pointer = &array[0]; // or *array;
    pointer = pointer + 2;
    if (pointer == &array[2])
    {
        printf("the value holds on the same memory");
    }
    else
    {
        printf("the does not hold on the same memory");
    }

    return 0;
}
