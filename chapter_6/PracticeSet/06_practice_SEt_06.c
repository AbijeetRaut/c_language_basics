#include <stdio.h>
int ChangeOrNot(int a, int b);
int main()
{
    int x = 34;
    int y = 45;
    ChangeOrNot(y, x);
    printf("let's see if the variable is change or not %d\n", x+y);
    
return 0;
}
int ChangeOrNot(int a, int b)
{
    a = 64;
    b = 98;    
}
/*HENCE:- 
        it does not change beacuse when the function call be called the copy variable is called so when the program
        is runned it does not change the orignal value*/