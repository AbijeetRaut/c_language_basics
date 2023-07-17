#include <stdio.h>
void function(int *pointer, int n);
int main()
{
    int array[5] = {456, 784, 423, 153, 781};
    function(array, 5);
return 0;
}
void function(int *pointer, int n)
{
    for (int i = 0; i < 5; i++)
    {
        printf("The numbers you have given in the array in array[%d] is %d\n", i+1, *(pointer + i));
    }
        
}