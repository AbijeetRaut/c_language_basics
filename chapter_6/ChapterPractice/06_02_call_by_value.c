    #include <stdio.h>
    int call(int a, int b);
    int main()
    {
        int s = 1, d = 1;
        call(s ,d);
        printf("the output of the call by value is %d\n", call(s ,d));
    return 0; 
    }
    int call(int a, int b)
    {
       int sum = a + b;
        a = 5;
        b = 5;
        printf("the answer of the sum is %d\n", sum);
        return sum;
    }
    /*
    Note:-
         because the function called in the void is already copied form the 
    int main()-------function.
    where the value of s and d is already copied as 1 and 1.
    so the rechange the value we have to declare the value before we have to declare another value 
    before the print statement for calculation statenment.
    */