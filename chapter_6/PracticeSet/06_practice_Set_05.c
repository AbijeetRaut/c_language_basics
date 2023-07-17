#include <stdio.h>
int main()
{
    int first_pointer = 84;
    int *second_pointer = &first_pointer;
    int **third_pointer = &second_pointer;
    printf("the value of first_pointer form the second_pointer is %d\n", *second_pointer);
    printf("the value of first_pointer form the third pointer is %d\n", **third_pointer);
return 0;
}