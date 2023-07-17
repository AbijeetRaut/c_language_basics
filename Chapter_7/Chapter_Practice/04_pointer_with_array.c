#include <stdio.h>
int main()
{
    int a = 98;
    int *pointer = &a;

    printf("the address of the pointer is %u\n", &a); 
    pointer += 15;
    printf("the address of the pointer after increment is %d\n", pointer);
    return 0;
}