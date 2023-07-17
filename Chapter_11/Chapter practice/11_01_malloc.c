#include <stdio.h>
#include <stdlib.h>
int main()
{
    //mallc = memory allocation 
    int *pointer;

    /*malloc malloc (spaces required for integer, sizeof(int))*/
    //malloc use one argument
    pointer = (int *)malloc(5 * sizeof(int));
    //malloc can also be used as array
    for (int i = 0; i < 5; i++)
    {
        printf("The number is %d:\t", i+1);
        scanf("%d", &pointer[i]);
    }

    for (int a = 0; a < 5; a++)
    {
        printf("the value in %d is: %d\n", a+1, pointer[a]);
    }
    /*
    NOTE:- malloc returns viod poitner
    so to take output as an int we have typecasted it in int and declearing by it by pointer by using (int *)
    */
    return 0;
}