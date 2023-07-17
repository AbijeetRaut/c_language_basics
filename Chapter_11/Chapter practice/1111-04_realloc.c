#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *pointer;
    pointer = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("Enter a number in %d: \n", i + 1);
        scanf("%d", &pointer[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("the number you entered are in %d is: %d\n", i + 1, pointer[i]);
    }

    pointer = realloc(pointer, 10 * sizeof(int));
    /* 
    why my realloc function won't run 10 times?
    -------> my pointer has capable of storing 10 values but the reason why i can store is
            my for loop dont holds the capable of storing 10 values.
                        ******THINK ABOUT IT******
    */

    for (int i = 0; i < 5; i++)
    {
        printf("Enter a number by clearing the second  %d\n", i + 1);
        scanf("%d", &pointer[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("the numbers entered in %d are: %d\n", i+1, pointer[i]);
    }

    //how does the program works?
    //--->basically, realloc works as like recycle bin which clear the above entered values and give another chance to
    //    enter the another values,
    //    -------------------------------------IN SIMPLE RECYCLE---------
    /*
            there are 2 of using realloc method
                 method 1  = pointer = (int *) realloc(pointer, sizeof(int));
                 method 2  = pointer = (int *) realloc(pointer, 10 * sizeof(int));
    */
    /*
        realloc is a modified verson if malloc where in the modified verson clearing is attached
   */
    return 0;
}