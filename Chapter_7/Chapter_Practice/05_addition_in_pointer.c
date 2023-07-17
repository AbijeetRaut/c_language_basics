#include <stdio.h>
int main()
{
    int a = 23;
    int *b = &a;
    printf("the address of the first poninter is %u\n", b);
    b += 1;
    printf("the result of the addition in pointer is %u\n", b); 
return 0;
}