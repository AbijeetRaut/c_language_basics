#include <stdio.h>
void wrong_swap(int a, int b);
void swap(int *a, int *b);
int main()
{
    int x = 3, y = 2;
    printf("The value of x and y before changing the value are %d and %d\n", x , y);
    wrong_swap(x, y);//if we give the certain value then i cannot replace with another value but because the first value
                    // has been already copied so the first value cannot be change. but,
    printf("The value of x and y after chaging the value of form call by value is %d and %d\n", x, y);
    swap(&x, &y);  //if we give the address of the certain once then the value will also be changed
    printf("The value of x and y after chaning the value by call by refrence are %d and %d", x, y);
return 0;
/*
Let, 
    call by value be the photocopy paper,
    call by refrence be your orignal note

    For call by value:-
                        if i give my photocopy paper to abisha and hide my orignal note then if she tear or make handcraft it does not
                        matters. same case for wrong_swap function.

    For call by refrence:-
                        if i give my orignal copy location to abisha and if she tear or make handcraft then my note is done for
                        as same is for swap function.
*/
}
void wrong_swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}