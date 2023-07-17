#include<stdio.h>
 
int main(){

    int b;

    scanf("%d", &b);

//   for(initalize;   test;   increment or decrement);
    for (int  i = b/*(initalize)*/; i <= 10/*(test)*/; i++/*(incement or decrement)*/)
    {
        printf("The Number Are %d \n", i);
    }     

    //1). initalize == setting a loop counter to a loop value.
    //eg::- for(int a = 0; test; increment or decrement)

    //2). test == checking a condition
    //eg::- for(int a = 0; a > 10; increment or decrement)


    //3). increment or decrement == updating a loop counter
    // for eg::- for(int a = 0; a > 10; a++)

return 0;
}