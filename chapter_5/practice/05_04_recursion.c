#include<stdio.h>
 
 int factorial(int a);

int main(){

    int b = 3;

    printf("the outcome of the factoral value is %d is %d", b, factorial(b));

return 0;
}

int factorial(int a){
    printf("sequence of calling factorial %d\n", a);
    if (a == 1 || a == 0)
    {
        return 1;
    }
    else
    {
        return a * factorial(a - 1);
    }
    
    
}