#include <stdio.h>

int sum(int a, int b); //the function a and b is denoted by a finction named c.(function prototype declearation)
//int a, int b are called parameter.

int main()
{

    int c;
    c = sum(5 , 10); // when we had writeen sum then the code writeen on the line 15 will runs automatically. (function call)
    //the number which is given as "sum(5 , 10)" are called as arguments. 
    printf("%d", c);

    return 0;
}
//the function which is derived in the top on no3
//it is defined in this statement.
int sum(int a, int b) //function prototype defined.
{
    int c;

    c = a + b;
    return c;
}
//note the function prototype function declearation has different variables.