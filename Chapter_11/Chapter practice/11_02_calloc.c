#include <stdio.h>
#include <stdlib.h>
int main()
{
    // calloc = continous allocation
    int *pointer;
    // callc takes 2 arguments
    pointer = (int *) calloc(5, sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", pointer[i]);
    }
    //NOTE: if a number is not sufficiant then, the memory allocaton fails, and NULL pointer returns.
return 0;
}